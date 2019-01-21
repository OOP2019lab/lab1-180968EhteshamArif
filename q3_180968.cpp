#include<iostream>
using namespace std;
void swap1(int *x,int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void swap2(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
int main()
{
  int x=9;
  int y=8;

  int*p=&x;
  int*q=&y;

  cout<<" The value of x is :"<<x;
  cout<<endl;
  cout<<" The value of y is :"<<y;
  cout<<endl;
  cout<<" The value of p is :"<<p;
  cout<<endl;
  cout<<" The value of q is :"<<q;
  cout<<endl;
  cout<<" The value of *p is :"<<*p;
  cout<<endl;
  cout<<" The value of *q is :"<<*q;
  cout<<endl;
  cout<<"-----After Swapping---- ";
  cout<<endl;
  swap2(x,y);
  cout<<" The value of x is :"<<x;
  cout<<endl;
  cout<<" The value of y is :"<<y;
  cout<<endl;

  cout<<endl;
  swap1(p,q);
   cout<<" The value of *p is :"<<p;
  cout<<endl;
  cout<<" The value of *q is :"<<q;
  cout<<endl;
   cout<<" The value of *p is :"<<*p;
  cout<<endl;
  cout<<" The value of *q is :"<<*q;
  cout<<endl;

}