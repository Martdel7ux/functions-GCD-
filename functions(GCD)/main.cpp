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
    
    if ( num2 > num1) {
            int temp = num2;
            num2 = num1;
            num1 = temp;
        }
        
        for (int i = 1; i <=  num2; ++i) {
            if (num1 % i == 0 && num2 % i ==0) {
               
                gcd=i;
            }
        }
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
