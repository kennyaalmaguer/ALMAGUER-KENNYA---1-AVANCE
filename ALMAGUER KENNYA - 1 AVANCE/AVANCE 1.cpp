#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    int opcion, nart, desicion;
    string articulo, descripcion, genero, clasificacion, consola;
    double precio;


    cout << "---MENU DE OPCIONES---\n";
    cout << "1- Alta\n";
    cout << "2.-Modificacion\n";
    cout << "3-Baja\n";
    cout << "4.-Lista\n";
    cout << "5.-Limpiar Pantalla\n";
    cout << "6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //alta        
        cout << "ingrese numero de articulo\n";
        cin >> nart;
        cout << "ingrese nombre de articulo\n";
        cin.ignore();
        getline(cin, articulo);
        cout << "ingrese descripcion de articulo\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese genero de articulo\n";
        cin.ignore();
        getline(cin, genero);
        cout << "ingrese clasificacion de articulo\n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "ingrese consola de articulo\n";
        cin.ignore();
        getline(cin, consola);
        cout << "ingrese precio de articulo\n";
        cin >> precio;

        precio = (precio * 1.16);

        cout << "\nDESEA AGREGAR OTRO ARTICULO 1-SI 2-NO\n";
        cin >> desicion;
        if (desicion == 1)
        {

            cout << "\nNOMBRE ARTICULO: " << articulo << "\n";
            cout << "NUMERO DE ARTICULO: " << nart << "\n";
            cout << "DESCRIPCION: " << descripcion << "\n";
            cout << "GENERO:" << genero << "\n";
            cout << "CLASIFICACION: " << clasificacion << "\n";
            cout << "CONSOLA: " << consola << "\n";
            cout << "PRECIO: " << precio << "\n\n";


            return main();

        }
        else
        {
            cout << "\nNOMBRE ARTICULO: " << articulo << "\n";
            cout << "NUMERO DE ARTICULO: " << nart << "\n";
            cout << "DESCRIPCION: " << descripcion << "\n";
            cout << "GENERO:" << genero << "\n";
            cout << "CLASIFICACION: " << clasificacion << "\n";
            cout << "CONSOLA: " << consola << "\n";
            cout << "PRECIO: " << precio << "\n\n";
        }

        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        system("cls"); // limpiar pantalla
        return main();
        break;
    case 6:
        exit(1); // cierra la pantalla
        break;

    }
}