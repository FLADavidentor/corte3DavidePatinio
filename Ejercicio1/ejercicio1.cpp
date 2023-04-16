#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iomanip>

using namespace std;

void calcMedia(const vector<double> numeros, double promedio)
{
    double numvec = numeros.size(); // asignar el tamaño del vector a una variable de tipo double
    double num = 0.0;

    for (int i = 0; i < numeros.size(); i++)
    {
        num += numeros[i];
    }

    promedio = num / numvec; // asignar el promedio calculado a la variable promedio pasada por referencia

    cout << "El promedio es: " << promedio;
}

int main()
{
    vector<double> numeros;
    double num = 0.0;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;
        numeros.push_back(num);

    } while (num > 0);

    cout << "Los numeros ingresados son:\n";
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << endl;
    }

    double promedio;
    calcMedia(numeros, promedio);

    return 0;
}
