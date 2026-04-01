#include <list>
#include <iostream>
using namespace std;

struct usuarios {
	int carne;
	string nombre;
	string apellido;
	string carrera;
	list<struct prestamos> prestados; //sublista de prestamos por usuario
};

struct libros {
	int codigo;
	string titulo;
	string autor;
	string editorial;
	int año;
	int cantidad_dis;
};

struct categorias {
	int codigo;
	string n_categoria;
	list <struct libros> libros_cat; //sublista de libros por categoría
};

struct Dispositivos {
	int codigo;
	string n_disp;
	string descripcion;
	string cantidad_d;
};

struct Prestamos {
	string articulo;
	string fecha;
	int cantidad;
};

struct Lista_espera {
	string usuario;
	string articulo_req;
	string cantidad_req;
};

struct Lista_morosos {
	string usuario_m;
	string articulo_pen;
	string cantidad_pen;
};



int main{

	int option;

	While(option != 5) {

		cout << "Sistema de prestamos de biblioteca."
		cout << "1. Mantenimiento"
		cout << "2. Prestamos y devoluciones."
		cout << "3. Consultas."
		cout << "4. Reportes."
		cout << "5. Salir."

		cin >> option;


		if option == 1{

			int man_option;

			cout << "Seleccione la acción que quiere realizar.";
			cout << "1. Insertar usuario";
			cout << "2. Modificar usuario";
			cout << "3. Borrar usuario";

			cin >> man_option;

			if man_option == 1{

				string Newu_name;
				int Newu_carne;
				string Newu_apellido;
				string Newu_carrera;

				cout << "Carne: ";
				cin >> Newu_carne;

				cout << "Nombre: ";
				cin >> Newu_name;

				cout << "Apellido: ";
				cin >> Newu_apellido;

				cout << "Carrera: ";
				cin >> Newu_carrera;



			}

			break

		}

		else if option == 2{

			break

		}

		else if option == 3{

			break

		}

		else if option == 4{

			break

		}

		else {

			break
		}


	}


return 0;
}
