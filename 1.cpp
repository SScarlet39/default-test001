#include<iostream>
using namespace std;
void displayA(int n);
void displayB(int n);
void main()
{
	int n,c;
	cout<<"请输入n="<<endl;
	cin>>n;
	cout<<"请选择输出功能："<<endl;
	cout<<"1、输出方式1"<<endl;
	cout<<"2、输出方式2"<<endl;
	cin>>c;
if (c==1)
  displayA(n);
if (c==2)
  displayB(n);
}
void displayA(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(2*i-1);j++)
			cout<<"$";
		cout<<endl;
	}
}
void displayB(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
			cout<<"# \a";
		cout<<endl;
	}
}
