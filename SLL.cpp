#include<iostream>
class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int d)
		{
			data=d;
			next=NULL;
		}
};
class Slist
{
	public:
		Node *root;
		Slist()
		{
			root=NULL;
		}
		void CreateList(Node *first)
		{
			if(root!=NULL)
			{
				printf("List is already created!, Try Adding node either!!");
			}
			else
			{
				root=first;
			}
		}
		void AddNodeAtFirst(Node *new_node)
		{
			Node *temp;
			if(root==NULL)
			{
				root=new_node;
			}
			else
			{
				temp=root;
				root=new_node;
				new_node->next=temp;
			}
			
		}
		void AddNode(Node *new_node)
		{
			Node *temp;
			if(root==NULL)
			{
				root=new_node;
			}
			else
			{
				temp=root;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=new_node;
			}
		}
		void DispNodes()
		{
			Node *temp;
			if(root==NULL)
			{
				printf("The list is Empty!");
			}
			else
			{
				temp=root;
				while(temp!=NULL)
				{
					printf("%d -> ", temp->data);
					temp=temp->next;
				}
			}
		}
};
int main(int argc, char *argv[])
{
	Slist SLL;
	Node q(50);
	SLL.CreateList(&q);
	q=Node(100);
	SLL.AddNode(&q);
	SLL.DispNodes();
}
