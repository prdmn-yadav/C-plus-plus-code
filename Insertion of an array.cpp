#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"Enter value in the array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	cout<<"The value entered by you are:\n";
	for(int i=0;i<5;i++)
	{
		cout <<a[i]<<" ";
	}
	return 0;
}
