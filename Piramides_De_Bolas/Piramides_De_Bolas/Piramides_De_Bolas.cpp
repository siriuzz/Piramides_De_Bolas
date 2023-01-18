// Enunciado:
// Programa Piramide de Bolas.
//
// Participantes:
// 1- John Luis Del Rosario S�nchez - ID 1106940
// 2- Ashly Marisell Paula Ynoa - ID 1108023
// 3- Eli�n Matos D�az - ID 1106901
// 4- Juan Daniel Ubiera M�ndez - ID 1107248
// 5- Kelvin Ar�stides Garc�a Espinal - ID 1107646
//
// Fecha de creaci�n:
// 10/11/2022
//
// Fecha de presentaci�n:
// 14/11/2022

#pragma region Includes

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
#include <cmath> //Este include nos sirve para utilizar el metodo MathPow.

#pragma endregion

using namespace std;

int main()
{
	//Variable de opci�n para que lo lea al final del bucle.
	int opcion = 0;

	//Variables de instancia
	double bolas;
	stringstream sstrBolas;
	string strBolas;

	//Bucle Do While para el men�.
	do {
		bolas = 0;
		double counter = 0;
		int capas = 0;

		//Este bloque guarda el n�mero colocado por el usuario en la variable "bolas",
		cout << "�Bienvenido a la piramide de bolas! \n \n";
		cout << "Digite el numero de bolas que desee colocar en la piramide: ";
		cin >> bolas;
		cout << "\n";

		//asignar valor de bolas a sstrBolas
		sstrBolas << bolas;

		//Asignar parte str de sstrBolas a strBolas
		strBolas = sstrBolas.str();

		if (strBolas == "0" || ceil(bolas) != floor(bolas)) {
			cout << "Valor Invalido, porfavor introduce un numero.\n";
			cout << "Presiona (Enter) para continuar con el programa.\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			system("PAUSE");
			bolas = 0.0;
			system("CLS");
		}

		//Reiniciar valor del strBolas y del sstrBolas
		sstrBolas.str("");
		sstrBolas.clear();
		strBolas = "";

		//Si se dio algun valor invalido, continua a la siguiente info
		if (bolas == 0.0) {
			cout << "\n" << "Desea intentar nuevamente? \n(1) Si \n(2) No\n>> ";
			cin >> opcion;
			system("CLS");
			continue;
		}


		//Bucle que se encarga de evaluar las capas con respecto a la cantidad de bolas.
		for (counter; pow(counter, 2) <= bolas;) {

			//Si el bucle se cumple, le restamos el contador a la bola.
			bolas = (bolas - pow(counter, 2));

			//Condici�n que evalua si la cantidad de bolas es mayor al contador, para determinar el n�mero de capas.		
			if (bolas >= pow(counter + 1, 2)) {
				capas++;
			}

			//Sumamos uno al contador, para realizar nuevamente la comparaci�n he identificar la cantidad de bolas.
			counter++;
		}

		//Este bloque se encarga de mostrar las capas que se pueden formar y las bolas que sobran.
		cout << "El numero de capas es: " << capas << " capas. " << endl;
		cout << "Estas son las bolas que sobran: " << bolas << " bolas. " << "\n";
		cout << "\n" << "Desea jugar otra vez? \n(1) Si \n(2) No\n>> ";
		cin >> opcion;

		system("CLS"); // Este comando limpia la consola.

	} while (opcion != 2);
}

