#include <iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
	int data;
	struct node *next; 
};
class linklist
{
	node *head,*tail;
public:
	linklist()
	{
		head =NULL;
		tail=NULL;
	}
	//~linklist();
	void addnode(int a)
	{
		node *temp=new node();
		temp->data=a;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=tail->next;
		}
			


		cout<<"Data inserted to the link list "<<a<<endl;
			}

	int length()
	{
		int count=0;
		node* temp;
		temp=head;
		while(temp!=NULL)
		{
			count++;
			temp=temp->next;
		}
		return count;
	}

	void findthis(int x)
	{	bool flag=false;
		node*temp=head;
		while(temp!=NULL)
		{
			if(temp->data==x)
				{flag=true; break;}
			temp=temp->next;
		}
	
	if(flag)
	cout<<"element found in the link list"; 
	else	
 	cout<<"no such element in linklist";
	cout<<endl;
	}

	void deletethis(int x)
	{
		node* temp=head,*prev;
	if (temp != NULL && temp->data == x)
    {
        head = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }

		while(temp->next!=NULL)
		{
			if (temp->data==x)

			{
				prev->next=temp->next;
				free(temp);
				cout<<x<<" element deleted"<<endl;
				/* code */
			}

			prev=temp;

			temp=temp->next;

		}
	}








};
int main(int argc, char const *argv[])
{
	linklist ll;
	for (int i = 1; i <=10; ++i)
	{
		ll.addnode(i);
	}
	cout<<"***************************  lenght of linklist  ********************************"<<endl;
	cout<<"length of linklist   :: "<<ll.length()<<endl;
	cout<<"*********************  finding an element in linklist  ********************************"<<endl;
	cout<<"enter the  element you are looing for "<<endl;
	int x;
	cin>>x;

	ll.findthis(x);
	ll.deletethis(x);
	ll.findthis(x);
	return 0;
}