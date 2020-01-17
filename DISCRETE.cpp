#include<iostream>
using namespace std;
int gcd(int,int);
int gcdrcrsn(int,int);
int fact(int);
int factrcrsn(int);
int calcpwr(int,int);
int powerrcrsn(int,int);
int fibo(int n);
int fiborcrsn(int,int,int);
int main()
{
	int base,power,x,y,rbase,rpower;
	int num,num1,num2,num3,num4,num5;
	int p=0,q=1;
	char A;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<endl;
	cout<<"Enter second number: ";
	cin>>num2;
		if(num1>num2)
	{
		x=num1;
		y=num2;
	}
	else
	{
		x=num2;
		y=num1;
	}
	
	
	try
	{
		if (num1<0||num2<0)
		throw num1;
		else
		{
		cout<<"THe hcf without recursion is: "<<gcd(num1,num2)<<endl;
		
		cout<<"THe gcd with recursion is: "<<gcdrcrsn(x,y);
		}
	}
	catch(int exception)
	{
		cout<<"Enter a valid value"<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	
	
	cout<<"Enter the value to find the factorial without recursion: ";
	cin>>num;
	try
	{
		if(num<0)
		{
			throw num;
		}
		else
		{
			cout<<"The factorial without recursion is: "<<fact(num)<<endl;
		}
	}
	catch(int )
	{
		cout<<"Enter a valid value."<<endl;
	}
	
	
	 
	cout<<"Enter the value to find the factorial with recursion:";
	cin>>num3;
	try
	{
		if(num3<0)
		{
			throw num3;
		}
		else
		{
			cout<<"The factorial with recursion is: "<<factrcrsn(num3)<<endl;
		}
	}
	catch(int)
	{
		cout<<"Enter a valid value."<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	
	
	cout<<"Enter base: ";
	cin>>base;
	cout<<endl;
	cout<<"Enter power: ";
	cin>>power;
	try
	{
		if(base==0)
		{
			throw 'A';
		}
		else if(power>0)
		{
		throw power;
		}
		else
		{
		cout<<"The value is: "<<"1/"<<calcpwr(base,power)<<endl;	
			
		}
	}
	catch(int)
	{
		cout<<"The value without using recursion is: "<<calcpwr(base,power)<<endl;
	}
	catch(char)
	{
		cout<<"Base can't be zero."<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"Enter base: ";
	cin>>rbase;
	cout<<endl;
	cout<<"Enter power: ";
	cin>>rpower;
	try
	{
		if(rbase==0)
		{
			throw 'A';
		}
		else if(rpower>0)
		{
		throw rpower;
		}
		else
		{
		cout<<"The value is: "<<"1/"<<powerrcrsn(rbase,rpower)<<endl;	
			
		}
	}
	catch(int)
	{
		cout<<"The value with recursion is: "<<powerrcrsn(rbase,rpower)<<endl;
	}
	catch(char)
	{
		cout<<"Base can't be zero."<<endl;;
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"Enter the number of terms of series: ";
	cin>>num5;
	try
	{
		
		if(num5<=0)
		{
			throw num5;
		}
		else
		{
			fibo(num5);
		}

	}
	catch(int)
	{
		cout<<"Enter a valid value.";	
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"Enter the number of terms of series: ";
	cin>>num4;
	cout<<"The series upto "<<num4<<"  terms is: ";
	try
	{
		
		if(num4<=0)
		{
			throw num4;
		}
		else
		{
			fiborcrsn(num4,p,q);
		}

	}
	catch(int)
	{
		cout<<"Enter a valid value.";	
	}
	return 0;
}
int gcd(int a,int b)	
{	
	int HCF;
	for(int i=1;i<=a&&i<=b;i++)
	{
		      if(a%i==0&&b%i==0)
		      {
		      	HCF=i;
			  }
			  
			  
	}
	return HCF;
}	

int gcdrcrsn(int a,int b)
{
	if(b==0)
	
		return a;
	
	else
	
		return gcdrcrsn(b,a%b);
	
}
int fact(int a)
{
	
		{
			int x=1;
			for(int i=a;i>0;i--)
			{	
			x=i*x;
			}
			return x;
		}	
}
	

int factrcrsn(int a)
{	
	try
	{
		if(a<0)
		{
			throw a;
		}
		else if(a==0)
		{
			return 1;
		}
		else
		{
			return a*factrcrsn(a-1);
	 	} 
	}
	catch(int)
	{
		cout<<"Enter a valid value.";
	}
}
int calcpwr(int a,int b)
{	
	b=(b>0)?b:-b;
	int x=1;
	for(int i=1;i<=b;i++)
	{
		x=a*x;
		}
		return x;	
}
int powerrcrsn(int a,int b)
{
	b=(b>0)?b:-b;
	if(b==0)
	return 1;
	else 
	return a*powerrcrsn(a,b-1) ;
}
int fibo(int n)
{
	int n1=0;
	int n2=1;
	int n3;
	cout<<"The series upto "<<n<<" terms is: "<<n1<<" "<<n2<<" ";
	for(int i=2;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
	
		cout<<n3<<" ";
	}
}
int fiborcrsn(int a,int b,int c)
{
	cout<<b<<" ";
	if(a==1)
	{
		return b+c;
	}
	else
	{
		return fiborcrsn(a-1,c,b+c);
	}
}
