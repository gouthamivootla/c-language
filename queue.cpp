#include<iostream.h>
class queue
{
public:
virtual void enqueue(int element)=0;
virtual void dequeue()=0;
virtual void display()=0;
};
class node
{
public:
int data;
node* right;
node* left;
node()
{
right=NULL;
left=NULL;
}
};
class queuepro:public queue
{
public:
//node* rear,front;
node* hearder;
node* prev;
queuepro()
{
//right=NULL;
//left=NULL;
hearder=NULL;
}
void enqueue(int element);
void dequeue();
void display();
};
void queuepro::enqueue(int element)
{
node*temp=new node();
if(/*left==right*/hearder==NULL)
{
temp->data=element;
temp->right=NULL;
hearder=temp;
prev=temp;

}
else
{
temp->data=element;
prev->right=temp;
temp->right=NULL;
temp->left=prev;
prev=temp;
}
}
void queuepro::dequeue()
{
node*tem=new node();
if(/*left==right*/hearder==NULL)
{
cout<<"queue is empty"<<endl;
exit(0);
}
tem=hearder;
hearder=hearder->right;
cout<<"delete element "<<tem->data;
delete(tem);
}
void queuepro::display()
{
if(hearder==NULL)
{
cout<<"queue is empty"<<endl;
exit(2);
}
node *x=new node();
x=hearder;
while(x!=NULL)
{
	cout<<x->data<<endl;
x=x->right;
}
}
int main()
{
int ch,element;
queuepro s;
while(1)
{
cout<<"enter your choice"<<endl;
cout<<"1.enqueue\n2.dequeue\n3.diaplay\n.4.exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:cout<<"option is enqueue"<<endl;
cout<<"enter the element"<<endl;
cin>>element;
s.enqueue(element);
break;
case 2:cout<<"option is dequeue"<<endl;
s.dequeue();
break;
case 3:cout<<"display option"<<endl;
s.display();
break;
case 4:exit(5);
}
}
return 0;
}

output:
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
1
option is enqueue
enter the element
3
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
1
option is enqueue
enter the element
7
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
1
option is enqueue
enter the element
8
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
3
display option
3
7
8
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
2
option is dequeue
delete element 3enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
3
display option
7
8
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
4
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
1
option is enqueue
enter the element
3
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
1
option is enqueue
enter the element
7
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
1
option is enqueue
enter the element
8
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
3
display option
3
7
8
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
2
option is dequeue
delete element 3enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
3
display option
7
8
enter your choice
1.enqueue
2.dequeue
3.diaplay
.4.exit
4
