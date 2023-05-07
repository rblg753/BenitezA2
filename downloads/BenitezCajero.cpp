
#include <iostream>

using namespace std;

int main() {
    int saldo = 1000;
    int opcion;
    int retiro;
    int deposito;
    
    cout << "Bienvenido al cajero automatico" << endl;
    
    do {
        cout << "Opciones disponibles:" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Realizar retiro" << endl;
        cout << "3. Realizar deposito" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar: $";
                cin >> retiro;
                if (retiro > saldo) {
                    cout << "No tiene suficiente saldo para realizar esta operacion" << endl;
                } else {
                    saldo -= retiro;
                    cout << "Retiro exitoso. Su saldo actual es: $" << saldo << endl;
                }
                break;
            case 3:
                cout << "Ingrese la cantidad a depositar: $";
                cin >> deposito;
                saldo += deposito;
                cout << "Deposito exitoso. Su saldo actual es: $" << saldo << endl;
                break;
            case 4:
                cout << "Gracias por utilizar nuestros servicios" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo" << endl;
                break;
        }
    } while (opcion != 4);
    
    return 0;
}
