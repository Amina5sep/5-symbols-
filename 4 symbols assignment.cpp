#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{ 
int num1,num2,i;
char operation;
 while (i<=1)
{
      cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    cout<<"chose the symbol";
    cin>>operation;
if(operation=='+')
{cout<<num1+num2<<endl;}
else
if (operation =='-')
  {cout<<num1-num2<<endl;}
else
if(operation=='*')
{cout<<num1*num2<<endl;}
else
if(operation=='/')
{cout<<num1/num2<<endl;}
else
if(operation=='%')
{cout<<num1%num2<<endl;}
else
{cout<<"select from these symbols only +,-,*,%,/";
}
cout<<"press 1 to continue"<<endl;
cin>>i;
}
}