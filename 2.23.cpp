#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Introduce cinco enteros: ";
    cin >> a >> b >> c >> d >> e;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (d > mayor) mayor = d;
    if (e > mayor) mayor = e;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;

    cout << "El mayor entero es: " << mayor << endl;
    cout << "El menor entero es: " << menor << endl;

    return 0;
}