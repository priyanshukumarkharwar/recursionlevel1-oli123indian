/* Priyanshu kumar kharwar
   19HCS4041              */
#include<iostream>
using namespace std;
int factorial(int num)
{
	try
	{
		if(num<0)	
		{
		  throw "Error Occured Enter a positive value ";	
		}
		else if(num==0)
	    {
			return 1;
	    }
	    else if (num>0)
	    {
	         int fact=1;
	    	 for(int i=num;i>0;i--)
	    	 {
	     		 fact=fact*i;
	     	 }
	     return fact; 	
	    }
	}
	   catch(const char*ptr)
	{
		cout<<ptr;
		cout<<"Error number : ";
		return 404;
	}	
}
int recfactorial(int num)
{
	try
	{
	    if(num<0)
	   {
		throw "Error Occured Enter a positive value ";
	   }
	    else if(num==0)
	    {
		return 1;
	    }
	    else if(num>0)
	    {
		return num*recfactorial(num-1);
	    }
	}
	    catch(const char*ptr)
	  {
		cout<<ptr;
		cout<<"Error number : ";
		return 404;
	  }	 
}
int gcd(int a,int b)
{
	try
	{
		if(a<0||b<0)
		{
			throw "Error Occured Enter a positive value ";
		}
		else
		{
		  int i;
	      int result;
	      for(i=1;i<=a&&i<=b;i++)
	        {
		       if(a%i==0&&b%i==0)
		      {
			   result=i;
		      }
	        }
	      return result;
		}
	}
	 catch(const char*ptr)
	   {
		cout<<ptr;
		cout<<"Error number : ";
		return 404;
	   }	 	
}
int recgcd(int a,int b)
{
	try
	{
		if(a<0||b<0)
		{
			throw "Error Occured Enter a positive value ";
		}
		else
		{
		
	        if(b==0)
	       {
		     	return a;
	       }
	        else
	       {
	      		 return recgcd(b,a%b);
	       } 
		}
	}
	catch(const char*ptr)
	   {
		cout<<ptr;
		cout<<"Error number : ";
		return 404;
	   }	 		
}
int pow(int num1,int num2)
{
	try
	{
		if(num1<0||num2<0)
		{
			throw "Error Occured Enter a positive value ";
		}
		else
		{
			int i;
	        int value=1;
	        for(i=1;i<=num2;i++)
	       {
		      value=value*num1;
	       }
	       return value;
		}
	}
	catch(const char*ptr)
	   {
		cout<<ptr;
		cout<<"Error number : ";
		return 404;
	   }	 	
}
int recpow(int num1,int num2)
{
	try
	{
		if(num1<0||num2<0)
		{
			throw "Error Occured Enter a positive value ";
		}
		else
		{
			if(num2==0)
	       {
	     	return 1;
	       }
	        else
	       {
		    return num1*recpow(num1,num2-1);
	       }
		}
	}
	catch(const char*ptr)
	   {
		cout<<ptr;
		cout<<"Error number : ";
		return 404;
	   }	 	
}
void fib(int a)
{
	try
	{
		if(a<0)
		{
			throw "Error Occured Enter a positive value"; 
		}
		else
		{
			int n1=0;
	        int n2=1;
	        int n3;
	        cout<<"The series upto "<<a<<" terms is: "<<n1<<" "<<n2<<" ";
            	for(int i=1;i<a-1;i++)
	           {
		         n3=n1+n2;
		         n1=n2;
	           	 n2=n3;
		         cout<<n3<<" ";
	           }
		}
	}
	catch(const char*ptr)
	   {
		cout<<ptr;
	   }	 	
}
int recfib(int i,int j,int k)
{
	try
	{
		
		if(i<0||j<0||k<0)
		{
			throw "Error Occured Enter a positive value";
		}
		else
		{
			cout<<j<<" ";
	        if(i==1)
	      {
		     return j+k;
	      }
	        else
          {
		   return recfib(i-1,k,j+k);
	      }
		}
	}
	catch(const char*ptr)
	   {
		cout<<ptr;
		cout<<"Error number : ";
		return 404;
	   }	 	
}
int main()
{
	cout<<"Program for Factorial without recursion ";
	cout<<endl;
	int num1;
	int num2;
	cout<<"Enter the Number ";
	cin>>num1;
	cout<<endl;
	int p=factorial(num1);
	cout<<p<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl<<endl;
	cout<<"Program for factorial with recursion "<<endl;
	cout<<"Enter the number ";
	cin>>num1;
	cout<<endl;
	cout<<recfactorial(num1)<<endl<<endl<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------- "<<endl;
	cout<<"Program for gcd without recursion ";
	cout<<endl;
	cout<<"Enter First the number ";
	cin>>num1;
	cout<<"Enter the second number ";
	cin>>num2;
	cout<<gcd(num1,num2)<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl<<endl;
	cout<<"Program for gcd with recursion ";
	cout<<endl;
    cout<<"Enter First the number ";
	cin>>num1;
	cout<<"Enter the second number ";
	cin>>num2;
	cout<<recgcd(num1,num2)<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"Program for m to the power n without recursion ";
	cout<<endl;
	int m;
	int n;
	cout<<"Enter First the number ";
	cin>>m;
	cout<<"Enter the second number ";
	cin>>n;
	cout<<pow(m,n)<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl<<endl;
	cout<<"Program for m to the power n  with recursion ";
	cout<<endl;
	cout<<"Enter the First number ";
	cin>>m;
	cout<<"Enter the second number ";
	cin>>n;
	cout<<recpow(m,n)<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"Program for printing fibonacci series upto n terms without recursion "<<endl;
	int num3;
	int num4=0;
	int num5=1;
	cout<<"Enter the Number upto which you want to print the fibonacci series ";
	cin>>num3;
	fib(num3);
	cout<<"\n---------------------------------------------------------------------------"<<endl<<endl;
	cout<<"Program for printing fibonnaci series upto n terms with recursion "<<endl;
	cout<<"Enter the Number upto which you want to print the fibonacci series ";
	cin>>num3;
	recfib(num3,num4,num5);
	
}
