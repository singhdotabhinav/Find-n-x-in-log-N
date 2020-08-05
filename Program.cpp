#include <iostream>
using namespace std;


//Program to find n^x in logn time compleixity

double power(double x, int y)
{
    if(y == 0) return 1;
   
   
        double d = power(x, y/2);
        if(y%2 == 0) return d*d;
        else return x*d*d;
    

    
}


int main(){

    double a=power(2,9);
    cout<<a;
}

