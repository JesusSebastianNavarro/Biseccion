#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double Funcion, a, b;

void Tabular(double Funcion);

int main ()
{
    cout << "Calculo aproximado de una raiz de una funcion por medio de método de bisección" << endl;
    cout << "Ingrese una función: ";
    cin >> Funcion; 

    cout << "Ingrese el intervalo inicial [a,b]" << endl;
    
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    Tabular(Funcion);

}

void Tabular (double Funcion)
{
    int i;
    cout << "x         f(x)" << endl;
    for (i = 3; i = -3; i--)
    {
        cout << i << Funcion(i) << endl;
    }
}