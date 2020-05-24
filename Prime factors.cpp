/*C++ Program to find all the prime factors of any integer. Integer will be user input.

  Author: Nilabja Das
  
  Date: 15.05.2020*/
  
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	//Functions
	int factors(unsigned long int);
	
	unsigned long int n;
	
	cout<<"\n Welcome! This is a program to show all the prime factors of any positive integer.";
	cout<<"\n\n Please enter the desired integer: ";
	cin>>n;
	cout<<"\nThe factors are: ";
	factors(n);
	return 0;
}

//Functions
int factors(unsigned long int n)
{
	unsigned long int i,k;
	int prime_check(unsigned long int);
	
	if(n%2==1)
		k=(n-1)/2;
	else
		k=n/2;
	
	int fact[k];
	int count=0;
	
	for(i=2;i<=k;i++)
	{
		bool a;
		a=prime_check(i);
		
		if(a==0)
		{
			if(n%i==0)
			{
				fact[count]=i;
				cout<<"\n "<<i;
				count++;
			}
			else
				continue;
		}
		else
			continue;		
	}
	cout<<"\n\n So, in total, "<<n<<" has "<<count+1<<" prime factors.";
	return 0;
}

//Prime checking function
int prime_check(unsigned long int x)
{
	unsigned long int j;
	int r,s=0;
	for(j=2;j<x;j++)
	{
		r=x%j;
		if(r==0)
			s++;
		else
			continue;
	}
	if(s==0)
		return 0;
	else
		return 1;
}
