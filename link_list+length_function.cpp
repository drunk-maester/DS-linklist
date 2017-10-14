#include <iostream>
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
};
int main(int argc, char const *argv[])
{
	linklist ll;
	for (int i = 1; i <=10; ++i)
	{
		ll.addnode(i);
	}
	cout<<"************************************lenght of linklist******************************************"<<endl;
	cout<<"length of linklist   :: "<<ll.length()<<endl;
	return 0;
}