#include <iostream>
#include <string>
using namespace std;

class Empleado {
  private:
    int clave;
    string nombre;
    string domicilio;
    double sueldo;
    int claveJefe;
    string nombreJefe;

  public:
    // constructor
    Empleado(int clave, string nombre, string domicilio, double sueldo, int claveJefe, string nombreJefe) {
        this->clave = clave;
        this->nombre = nombre;
        this->domicilio = domicilio;
        this->sueldo = sueldo;
        this->claveJefe = claveJefe;
        this->nombreJefe = nombreJefe;
    }

    // setters
    void setDomicilio(string domicilio) {
        this->domicilio = domicilio;
    }

    void setSueldo(double porcentajeIncremento) {
        this->sueldo += sueldo * (porcentajeIncremento / 100);
    }

    void setNombreJefe(string nombreJefe) {
        this->nombreJefe = nombreJefe;
    }

    // getters
    int getClave() {
        return clave;
    }

    string getNombre() {
        return nombre;
    }

    string getDomicilio() {
        return domicilio;
    }

    double getSueldo() {
        return sueldo;
    }

    int getClaveJefe() {
        return claveJefe;
    }

    string getNombreJefe() {
        return nombreJefe;
    }
};

int main() {
    Empleado JefePlanta(1, "Juan", "Calle Marconi 17", 15000, 0, "");
    Empleado JefePersonal(2, "Maria", "Calle Esteban Loera 46", 12000, 1, "Juan");

    // menú para realizar las acciones
    int opcion;
    do {
        cout << "1. Cambiar domicilio" << endl;
        cout << "2. Actualizar sueldo" << endl;
        cout << "3. Imprimir datos de un empleado" << endl;
        cout << "4. Cambiar nombre de jefe" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int claveEmpleado;
                string nuevoDomicilio;
                cout << "Ingrese la clave del empleado: ";
                cin >> claveEmpleado;
                cout << "Ingrese el nuevo domicilio: ";
                cin >> nuevoDomicilio;
                if (claveEmpleado == JefePlanta.getClave()) {
                JefePlanta.setDomicilio(nuevoDomicilio);
                } else if (claveEmpleado == JefePersonal.getClave()) {
                JefePersonal.setDomicilio(nuevoDomicilio);
                } else {
                cout << "Empleado no encontrado" << endl;
                }
                break;
                }
                case 2: {
                int claveEmpleado;
                double porcentajeIncremento;
                cout << "Ingrese la clave del empleado: ";
                cin >> claveEmpleado;
                cout << "Ingrese el porcentaje de incremento: ";
                cin >> porcentajeIncremento;
                if (claveEmpleado == JefePlanta.getClave()) {
                JefePlanta.setSueldo(porcentajeIncremento);
                } else if (claveEmpleado == JefePersonal.getClave()) {
                JefePersonal.setSueldo(porcentajeIncremento);
                } else {
                cout << "Empleado no encontrado" << endl;
                }
                break;
                }
                case 3: {
                int claveEmpleado;
                cout << "Ingrese la clave del empleado: ";
                cin >> claveEmpleado;
                if (claveEmpleado == JefePlanta.getClave()) {
                cout << "Nombre: " << JefePlanta.getNombre() << endl;
                cout << "Domicilio: " << JefePlanta.getDomicilio() << endl;
                cout << "Sueldo: " << JefePlanta.getSueldo() << endl;
                cout << "Clave jefe: " << JefePlanta.getClaveJefe() << endl;
                cout << "Nombre jefe: " << JefePlanta.getNombreJefe() << endl;
                } else if (claveEmpleado == JefePersonal.getClave()) {
                cout << "Nombre: " << JefePersonal.getNombre() << endl;
                cout << "Domicilio: " << JefePersonal.getDomicilio() << endl;
                cout << "Sueldo: " << JefePersonal.getSueldo() << endl;
                cout << "Clave jefe: " << JefePersonal.getClaveJefe() << endl;
                cout << "Nombre jefe: " << JefePersonal.getNombreJefe() << endl;
                } else {
                cout << "Empleado no encontrado" << endl;
                }
                break;
                }
                case 4: {
                int claveEmpleado;
                string nuevoNombreJefe;
                cout << "Ingrese la clave del empleado: ";
                cin >> claveEmpleado;
                cout << "Ingrese el nuevo nombre del jefe: ";
                cin >> nuevoNombreJefe;
                if (claveEmpleado == JefePlanta.getClave()) {
                JefePlanta.setNombreJefe(nuevoNombreJefe);
                } else if (claveEmpleado == JefePersonal.getClave()) {
                JefePersonal.setNombreJefe(nuevoNombreJefe);
                } else {
                cout << "Empleado no encontrado" << endl;
                }
                break;
                }
                case 5: {
                break;
                }
                default: {
                cout << "Opcion invalida" << endl;
                break;
                }
                }
                } while (opcion != 5);
                return 0;
}
