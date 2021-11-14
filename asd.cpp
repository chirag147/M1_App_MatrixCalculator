#include<iostream>
using namespace std;
int main()
{
	char op;
	float a,b;
	cout<<"enter the operator +-/*";
	cin>>op;
	cout<<"enter two numners";
	cin>>a>>b;
	switch(op)
	{
		case '+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
		case '-':
			cout<<a<<"-"<<b<<"="<<a-b;
			break;
		case '/':
			cout<<a<<"/"<<b<<"="<<a/b;
			break;
		case '*':
			cout<<a<<"*"<<b<<"="<<a*b;
			break;
	}
}
