
#include <stdio.h>

int main()
{

		int Posicion;
		int Tamano;
		int PosicionHexadecimal;
		int TamanoHexadecimal;
		int Cero01;
		int Cero02;

		Cero01 = 0000;
		Cero02 = 0000;
		scanf_s("%i", &Tamano);
		scanf_s("%i", &Posicion);

		TamanoHexadecimal = Tamano;
		PosicionHexadecimal = Posicion;
		printf("%c%c%08X%04i%04i%08X", 66, 77, TamanoHexadecimal, Cero01, Cero02, PosicionHexadecimal);
		return 0;
	}


