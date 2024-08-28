#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cin>>x>>y;
    if (x<y) 
    {
        cout<<y<<" es mayor";
    }
    else if (x>y)
    {
        cout<<x<<" es mayor";
    }
    else 
    {
        cout<<"estos numeros son iguales ";
    }


}