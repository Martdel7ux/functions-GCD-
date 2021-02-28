//
//  main.cpp
//  functions(GCD)
//
//  Created by MARTIN on 28/02/2021.
//

#include <iostream>

using namespace std;

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
    
    
    cout<<"GCD is:"<<gcd(n1,n2)<<endl;
    
    return 0;
}
