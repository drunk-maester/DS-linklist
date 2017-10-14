#include<iostream>
using namespace  std;
struct node
{
	int data;
	struct node *next;	
};
class linklist
{
private:
	node *head,*tail;
public:
	linklist()
	{
		head=NULL;
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
		cout<<"element added to the linklist  "<<a<<endl;
	}
};
int main(int argc, char const *argv[])
{
	linklist ll;
	for (int i = 1; i <= 10; ++i)
	{
		ll.addnode(i*100);
		/* code */
	}
	return 0;
}