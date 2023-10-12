#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    bool menu1 = true, menu2 = true, menu3 = true, menu4 = true, menu5 = true, submenu1 = true;
    int opc1, opc2, opc3, opc4, opc5, subopc1;
    do
    {
        cout << "------- Menu Principal -------" << endl;
        cout << "1 - Admin" << endl;
        cout << "2 - Pasajes" << endl;
        cout << "3 - Informes de Recaudacion" << endl;
        cout << "4 - Consultas" << endl;
        cout << "5 - Configuracion" << endl;
        cout << "0 - Salir del Programa" << endl;
        cout << "Ingrese la opcion deseada: " << endl;
        cin >> opc1;
        system("cls");

        switch (opc1)
        {

        case 1:
            do
            {
                cout << "------- Menu Admins -------" << endl;
                cout << "1 - Crear Admin" << endl;
                cout << "2 - Modificar Admin" << endl;
                cout << "3 - Eliminar Admin" << endl;
                cout << "4 - Listar Admins" << endl;
                cout << "5 - Buscar Admin por ID" << endl;
                cout << "6 - Volver al Menu Principal" << endl;
                cin >> opc2;
                switch (opc2)
                {
                case 1:
                    ///Llama a clase/función para el ingreso de datos del nuevo admin
                    break;
                case 2:
                    /// Llama a clase/función para modificar los datos de un admin existente
                    break;
                case 3:
                    /// Llama a clase/función para eliminar un admin
                    break;
                case 4:
                    /// Llama a una clase/función para listar los admins ya cargados
                    break;
                case 5:
                    /// Llama a una clase/función para listar los admins por su ID
                    break;
                case 6:
                    menu2 = false;
                    break;
                default:
                    cout << "Opcion invalida, intente nuevamente" << endl;
                }
            }
            while (menu2 == true);
            break;
        case 2:
            /// Llama a funcion que carga una venta de pasaje tomando datos por separados o juntos?
            break;
        case 3:
            do
            {
                cout << "------- Menu Informes de Recaudacion -------" << endl;
                cout << "1 - Informar recaudacion por tipo" << endl;
                cout << "2 - Informar recaudacion total" << endl;
                cout << "3 - Volver al menu principal" << endl;
                cin >> opc3;

                switch(opc3){
                case 1:
                    do{
                     cout << "1 - Por destino" << endl;
                     cout << "2 - Por tipo de viaje" << endl;
                     cout << "3 - Por fecha" << endl;
                     cout << "4 - Por tipo de pago" << endl;
                     cout << "5 - Por inclusión de hoteles y/o excursiones" << endl;
                     cout << "6 - Por admin" << endl;
                     cout << "7 - Volver al menu anterior" << endl;
                     cin >> subopc1;

                     switch(subopc1){
                     case 1:
                         /// Llama a función que calcule la recaudacion por destino
                     break;
                     case 2:
                         /// Llama a función que calcule la recaudacion por tipo de viaje
                     break;
                     case 3:
                         /// Llama a función que calcule la recaudacion por fecha
                     break;
                     case 4:
                         /// Llama a función que calcule la recaudacion por tipo de pago
                     break;
                     case 5:
                         /// Llama a función que calcule la recaudacion por inclusion de hoteles y/o excursiones
                     break;
                     case 6:
                         /// Llama a función que calcule la recaudacion por admin
                     break;
                     case 7:
                         submenu1 = false;
                     break;

                     default:
                        cout << "Opcion invalida, ingrese nuevamente" << endl;
                        }
                    }
                    while (submenu1 == true);
                    break;
                case 2:
                    /// Llama a una función que calcula la recaudación total entre todas las ventas
                    break;
                case 3:
                    menu3 = false;
                    break;

                }
            }while (menu3 == true);
            break;
        case 4:
            do{
                cout << "1 - Consulta de pasajes por viaje" << endl;
                cout << "2 - Consulta de pasajes por pasajeros" << endl;
                cout << "3 - Consulta de pasajes por destino" << endl;
                cout << "4 - Consulta de pasajes por datos de pasajeros" << endl;
                cout << "5 - Consulta de pasajes por fecha" << endl;
                cout << "6 - Volver al menu principal" << endl;
                cin >> opc4;

                switch (opc4){
                case 1:
                    /// Llama a funcion que devuelve por pantalla los pasajes vendidos por viaje
                break;
                case 2:
                    /// Llama a funcion que devuelve por pantalla los pasajes vendidos por pasajeros
                break;
                case 3:
                    /// Llama a funcion que devuelve por pantalla los pasajes vendidos por destino de viaje
                break;
                case 4:
                    /// Llama a funcion que devuelve por pantalla los pasajes vendidos por datos de pasajeros
                break;
                case 5:
                    /// Llama a funcion que devuelve por pantalla los pasajes vendidos por viaje
                break;
                case 6:
                    menu4 = false;
                break;
                }
            }
            while (menu4 == true);
            break;
        case 5:
            do{
            cout << "------- Menu de configuracion -------" << endl;
            cout << "1 - Listar precios" << endl;
            cout << "2 - Exportar datos" << endl;
            cout << "3 - Volver al menu principal" << endl;
            cin >> opc5;
            switch (opc5){
                case 1:
                    /// Llama a función para que muestra por pantalla una tabla? de precios
                break;
                case 2:
                    /// Llama a función para crear un archivo con la venta de pasajes
                break;
                case 3:
                    menu5 = false;
                break;
                }

            }
            while (menu5 == true);
            break;
        case 0:
            menu1 = false;
            break;
        default:
            cout << "Opcion invalida, intente nuevamente" << endl;
        }

    }
    while (menu1 == true);
    return 0;
}

