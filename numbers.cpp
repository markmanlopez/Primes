/*
Author: Kevin Markman-Lopez
Course: CSCI-135
Instructor: Genady Maryash
Assignment: LAB 5-A 
*/


#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
	{
		//check if d ==0 
		if(d==0)
		{
			return false; 
		}
		//if n%d == 0 than the number is divisible
		else if(n%d==0)
		{
			return true;
		} 
		return false;
	}

bool isPrime(int n)
{
	if(n<=1)
	{
		return false; 
	}
	for(int i= 2; i < n-1;i++)
	{
		if(n%i==0)
		{
			return false;
			break; 
		}
	}
	return true; 
}

int nextPrime(int n)
{
	int nextP = n+1;

	while(isPrime(nextP)==false)
	{
		nextP+=1;

	}
	return nextP;
}

int countPrimes(int a, int b)
{
	int count =0; 

	for(int i = a; i<=b;i++)
	{
		if(isPrime(i)==true)
		{
			count++;
		}
	}
	return count; 
}

int isTwinPrime(int n)
{
	if((isPrime(n)&&isPrime(n+2))|| (isPrime(n) && isPrime(n-2)))
	{
		return true;
	}
	return false; 
}

int nextTwinPrime(int n)
{
	int nextTwin = nextPrime(n);
	while(!isTwinPrime(nextTwin))
	{
		nextTwin = nextPrime(nextTwin);
	}
	return nextTwin;
}

int largestTwinPrime(int a, int b)
{
	for(int i = b; i>=a; i--)
	{
		if(isTwinPrime(i))
		{
			return i;
		}
	}
	return -1; 
}



int main() 
{
	/*
	int n; 
	int d; 
	//output
	cout<<"Please enter the dividend:"<<endl;
	cin>>n;
	cout<<"Please enter the divisor:"<<endl;
	cin>>d;

	if(isDivisibleBy(n,d)==1)
	{
		cout<<"(isDivisibleBy("<<n<<","<<d<<"), true)"<<endl;
	}
	else
	{
		cout<<"(isDivisibleBy("<<n<<","<<d<<"), false)"<<endl;
	}
	
	*/
	cout<<largestTwinPrime(1,21)<<endl;

	return 0;
}
