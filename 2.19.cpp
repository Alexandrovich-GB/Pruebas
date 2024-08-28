#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int sum;
    int prom;
    int produ;
    
    cin>>x>>y>>z;
    sum = x+y+z ;
    prom = (x+y+z)/3;
    produ = x*y*z;

    cout<<"la suma es "<<sum<<endl;
    cout<<"el promedio es "<< prom<<endl;
    cout<<"el producto es "<< produ<<endl;


    if (x>y && x>z) 
    {
        cout<<"el mayor es "<<x<<endl;
    }
    else if (y>x && y>z )
    {
        cout<<"el mayor es "<<y<<endl;
    }
    else 
    {
        cout<<"el mayor es "<<z<<endl;
    }
    
    if (x<y && x<z) 
    {
        cout<<"el menor es "<<x<<endl;
    }
    else if (y<x && y<z )
    {
        cout<<"el menor es "<<y<<endl;
    }
    else 
    {
        cout<<"el menor es "<<z<<endl;
    }

}