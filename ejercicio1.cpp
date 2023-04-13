#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iomanip>

using namespace std;
void calcMedia(int vector[1000], int cant);
bool evaluarNum(int num);
//
void calcMedia(int cant)
{
    vector<double> numero;
    int num = 0;
    char opcion;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;
        numero.push_back(num);

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;

    } while (opcion != 'n');

    cout << "Los numeros ingresados son: ";
    for (int i = 0; i < numero.size(); i++)
    {
        cout << numero[i] << endl;

        cout << "numero: " << numero[i] << endl;
    }
}
