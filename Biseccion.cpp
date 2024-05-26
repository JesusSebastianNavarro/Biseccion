#include <iostream>
#include <iomanip>
#include "muparser/muParser.h" 

using namespace std;
using namespace mu;

double a, b;

void Tabular(Parser &parser);

int main()
{
    cout << "Calculo aproximado de una raiz de una funcion por medio de metodo de biseccion" << endl;

    string funcion;
    cout << "Ingrese una funcion (por ejemplo: x^2 - 4): ";
    cin >> funcion;

    cout << "Ingrese el intervalo inicial [a,b]" << endl;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    Parser parser;
    try {
        parser.SetExpr(funcion);
    }
    catch (Parser::exception_type &e) {
        cerr << "Error: " << e.GetMsg() << endl;
        return 1;
    }

    Tabular(parser);

    return 0;
}

void Tabular(Parser &parser)
{
    cout << "x         f(x)" << endl;
    for (double x = 3; x >= -3; x--)
    {
        parser.DefineVar("x", &x);
        try {
            cout << x << "    " << parser.Eval() << endl;
        }
        catch (Parser::exception_type &e) {
            cerr << "Error: " << e.GetMsg() << endl;
            break;
        }
    }
}