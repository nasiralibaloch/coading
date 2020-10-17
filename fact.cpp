#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	int fact=1;
	cout<<"enter the num"<<endl;
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
		
	
	
	}
		cout<<num<<"!"<<"="<<fact<<endl;

	
	return 0;
}
