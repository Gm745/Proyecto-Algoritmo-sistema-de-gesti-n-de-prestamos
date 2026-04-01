#include<iostream>
#include<list>
using namespace std;



int opciones() {

	int num;

	cout << " seleccione la opcion que desea" << endl;
	cout << " 1- Mantenimiento (insertar/modificar/borrar) " << endl;
	cout << " 2- Prestamos y devoluciones " << endl;
	cout << " 3- consultas " << endl;
	cout << " 4- reportes" << endl;
	cout << " 5- salir" << endl;

	cin >> num;

	switch (num) {
	case 1:
		cout << "bienvenido a la sección de insertar, seleccione la opción correcta" << endl;
		break;
	case 2:
		cout << "Bienvenido a la sección de prestamos" << endl;
		break;
	case 3:
		cout << "bienvenido a la sección de Consultas" << endl;
		break;
	case 4:
		cout << "bienvenido a la sección de Reportes" << endl;
		break;
	case 5:
		cout << "saliendo......" << endl;
		break;
	default:
		cout << "opcion no validad " << endl;

	}while (opciones != 0);

	return 0;
}





int main() {

	opciones();

	return 0;
}