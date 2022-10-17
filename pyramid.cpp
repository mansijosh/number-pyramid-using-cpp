#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	
	int i,n,j,k;
	cout<<"Enter the number of rows in pyramid :";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for (k=1;k<=i;k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
	getch();
	return 0;
}
		
		
	

