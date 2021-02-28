//
//  main.cpp
//  functions(GCD)
//
//  Created by MARTIN on 28/02/2021.
//

#include <iostream>

using namespace std;


double divide(int num1,int num2)
{
    int divide;
    
    divide= num1/num2;
    
    return divide;
}

int average(int num1,int num2)
{
    int average;
    average=(num1+num2)/2;
    
    return average;
}

int sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    
    return sum;
}

int max(int num1,int num2)
{
    int result;
    if(num1>num2)
    {
         result = num1;
    }
    else
        result=num2;
    
    return result;
}

int gcd(int num1,int num2)
{
    int gcd=1;
    
   while(num1!=num2)
   {
       if(num1>num2)
       {
           num1-=num2;
       }
       else
           num2-=num1;
   }
    
    gcd=num1;
    
    return gcd;
    
}

int main()
{
    int n1,n2;
    
    
   
    
    cout<<"enter first number here:"<<endl;
    cin>>n1;
    
    cout<<"enter second number here:"<<endl;
    cin>>n2;
    
    cout<<n1<<"/"<<n2<<"="<<divide(n1,n2)<<endl;
    cout<<"average is:"<<average(n1,n2)<<endl;
    cout<<"sum of two numbers is:"<<sum(n1,n2)<<endl;
    cout<<"max of two numbers is:"<<max(n1,n2)<<endl;
    cout<<"GCD is:"<<gcd(n1,n2)<<endl;
    
    return 0;
}
