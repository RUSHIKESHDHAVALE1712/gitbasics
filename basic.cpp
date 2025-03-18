#include<iostream>
using namespace std;
main()
{
	int a[5]={1,2,3,4,5},large=-1,s_large=-1;
	for(int i=0;i<5;i++)
	{
		if(a[i]>large)
		{
			s_large=large;
			large=a[i];
		}
		if(a[i]>large && a[i]!=large)
		s_large=a[i];
		
	}
	cout<<"\n Largest no= "<<large;
	
	cout<<"\n Second Largest no= "<<s_large;
	
}