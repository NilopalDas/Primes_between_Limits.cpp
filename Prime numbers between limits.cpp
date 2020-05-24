/*C++ Program to display all the prime numbers between two given integral limits.

 Author: Nilabja Das
 
 Date; 15.05.2020*/
 
#include<iostream>

using namespace std;

//Global variables
unsigned long int count=1;

int main()
{
	unsigned long int lower_lim, upper_lim;
	unsigned long int i;
	
	int prime_check(unsigned long int);
	
	cout<<"\n Welcome! This is a program to display all the prime numbers between two given limits.";
	cout<<"\n\nEnter lower limit: ";
	cin>>lower_lim;
	cout<<"Enter upper limit: ";
	cin>>upper_lim;
	
	cout<<"\n The prime numbers are: ";
	
	for(i=lower_lim;i<=upper_lim;i++)
	{
		bool a;
		a=prime_check(i);
		if(a==0)
		{
			if(count%2==0)
				cout<<"\t\t"<<i;
			else
				cout<<"\n "<<i;
			count++;
		}
		else
			continue;	
	}
	cout<<"\n\nSo, in total, there are "<<count-1<<" prime numbers between "<<lower_lim<<" and "<<upper_lim<<" .";
	cout<<"\nThank you!";
	return 0;
}

//Function
int prime_check(unsigned long int n)
{
	
	unsigned int r,s=0;
	unsigned long int j;
	for(j=2;j<n;j++)
	{
		r=n%j;
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
