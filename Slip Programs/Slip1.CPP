/*Write a C++ program for swapping values of two variables using call by 
reference. */
#include <iostream>
#include <conio.h>
void swap (int &a,int&b);

 void main ()
{

  int a,b;

  cout<<"Enter Numbers:";
  cin>>a>>b;
  cout<<"a="<<a<<"b="<<b<<endl;
  swap (a,b);
  cout<<"a="<<a<<"b="<<b<<endl;

}
   void swap (int &x ,int&y)
{
  int z=x;
  x=y;
  y=z;
}

