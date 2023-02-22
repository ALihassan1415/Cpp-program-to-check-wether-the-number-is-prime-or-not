#include<iostream>
using namespace std;
main()
{
	int n,i;
	bool flag;
	cout<<"Enter the number : ";
	cin>>n;
	for(i=2;i<10;i++)
	{
		if(n!=i || n==0 )
		{
		if(n==1 || n%i==0)
		flag++;
		}   
		}
		if(flag==0)
		cout<<n<<" is a prime number ";
		else
		cout<<n<<" is not a prime number ";
		return 0;
}   