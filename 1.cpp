#include<iostream>
using namespace std;
void displayA(int n);
void displayB(int n);
void main()
{
	int n,c;
	cout<<"������n="<<endl;
	cin>>n;
	cout<<"��ѡ��������ܣ�"<<endl;
	cout<<"1�������ʽ1"<<endl;
	cout<<"2�������ʽ2"<<endl;
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
