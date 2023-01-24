#include <iostream>
#include <string>
using namespace std;
class Materia {
    private:
        string clave;
        string nombre;
        string maestro;
    public:
        Materia(string clave, string nombre, string maestro) {
            this->clave = clave;
            this->nombre = nombre;
            this->maestro = maestro;
        }
        void cambiarClave(string nuevaClave) {
            clave = nuevaClave;
        }
        void cambiarMaestro(string nuevoMaestro) {
            maestro = nuevoMaestro;
        }
        void imprimirDatos() {
            cout << "Clave: " << clave << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Maestro: " << maestro << endl;
        }
};
int main() {
    Materia Programacion("I5991", "Programacion", "Juan Perez");
    Materia BasesDatos("I5891", "Bases de Datos", "Maria Rodriguez");
    int opcion;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Cambiar clave de Programacion" << endl;
        cout << "2. Cambiar maestro de Bases de Datos" << endl;
        cout << "3. Imprimir datos de Bases de Datos" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                {
                string nuevaClave;
                cout << "Ingrese nueva clave: ";
                cin >> nuevaClave;
                Programacion.cambiarClave(nuevaClave);
                break;
                }
            case 2:
                {
                string nuevoMaestro;
                cout << "Ingrese nuevo maestro: ";
                cin >> nuevoMaestro;
                BasesDatos.cambiarMaestro(nuevoMaestro);
                break;
                }
            case 3:
                {
                BasesDatos.imprimirDatos();
                break;
                }
            case 4:
                {
                return 0;
                break;
                }
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    }
}
