// Enunciado:
// Programa Piramide de Bolas.
//
// Participantes:
// 1- John Luis Del Rosario Sánchez - ID 1106940
// 2- Ashly Marisell Paula Ynoa - ID 1108023
// 3- Elián Matos Díaz - ID 1106901
// 4- Juan Daniel Ubiera Méndez - ID 1107248
// 5- Kelvin Arístides García Espinal - ID 1107646
//
// Fecha de creación:
// 10/11/2022
//
// Fecha de presentación:
// 14/11/2022

#pragma region Includes

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cmath> //Este include nos sirve para utilizar el metodo MathPow.

#pragma endregion

using namespace std;

int main()
{
	//Variables
	int bolas = 10000, counter = 0, capas = 0;

	//Este bloque guarda el número colocado por el usuario en la variable "bolas",
	cout << "¡Bienvenido a la piramide de bolas!\n";
	cout << "Calcularemos cuantas capas completas tendria una piramide de base cuadrada si tuviesemoso 10000 bolas para crearla.";
	cout << "\n";

	//Bucle que se encarga de evaluar las capas con respecto a la cantidad de bolas.
	for (counter; pow(counter, 2) <= bolas;) {

		//Si el bucle se cumple, le restamos el contador a la bola.
		bolas = (bolas - pow(counter, 2));

		//Condición que evalua si la cantidad de bolas es mayor al contador, para determinar el número de capas.		
		if (bolas >= pow(counter + 1, 2)) {
			capas++;
		}

		//Sumamos uno al contador, para realizar nuevamente la comparación he identificar la cantidad de bolas.
		counter++;
	}

	//Este bloque se encarga de mostrar las capas que se pueden formar y las bolas que sobran.
	cout << "El numero de capas es: " << capas << " capas. " << endl;
	cout << "Estas son las bolas que sobran: " << bolas << " bolas. " << endl;
}