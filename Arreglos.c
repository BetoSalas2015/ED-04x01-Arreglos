#include <stdio.h>			//  Para la I/O entrada/Salida 
#include <stdlib.h>			//  para  system()
#include <string.h>			//  Para el manejo de cadenas

int main()
{
	char nombre[15];
	char apellido[15];
	char nombreCompleto[30];

	printf("Da el nombre ");
	gets(nombre);
	printf("Da el appelido ");
	gets(apellido);

	strcpy(nombreCompleto, strcat(nombre, apellido) );
	puts(nombreCompleto);


	//char cadena[30] = "Hola ";		//  inicialización de la cadena
	//char cadena2[30] = "mundo";

	//printf("cadena + cadena2: %s\n", strcat(cadena, cadena2) );


	//-----------------------------------------------------------------
	//char cadena[30] = "Hola mundo";		//  inicialización de la cadena
	//char cadena2[30] = "Saludos Programas!!!!";

	//printf("El tamaño de la cadena es: %d\n", strlen(cadena) );
	//printf("El tamaño de la cadena2 es: %d\n", strlen(cadena2) );

	//if( strlen( cadena) == strlen(cadena2) )
	//	puts("Son del mismo tamaño");
	//else
	//	puts("No son del mismo tamaño");

	/////-----------------------------------------------------------------
	//int i;
	//char cadena2[30] = "Hola Mundo";
	//char cadena[30] = "Hola mundo";		//  inicialización de la cadena
	//
	//printf("%s == %s?\n", cadena2, cadena);
	//printf("strcmp (cadena2, cadena) => %d\n", strcmp(cadena2,cadena) );

	//if( !strcmp( cadena2, cadena) )
	//	puts("Son iguales");
	//else
	//	puts("No son iguales");

	///-----------------------------------------------------------------
	//i = 0;
	//while(cadena[i] != '\0')
	//{
	//	cadena[i] = cadena2[i];
	//	i++;
	//}
	//puts(cadena);

	//strcpy(cadena, "Saludos Programas");		//  copiar cadena 2 en cadena 1
	//puts(cadena);

	//char cadena[30] = "\0";
	//int i = 0;

 //   printf("Dame una cadena: ");
	//gets(cadena);

	//while(cadena[i] != '\0')
	//{
	//	printf("Cadena[%d] = %c\n", i, cadena[i]);
	//	i++;
	//}


	//cadena[0] = 'H';
	//cadena[1] = 'o';
	//cadena[2] = 'l';
	//cadena[3] = 'a';
	//cadena[4] = ' ';
	//cadena[5] = 'M';
	//cadena[6] = 'u';
	//cadena[7] = 'n';
	//cadena[8] = 'd';
	//cadena[9] = 'o';
	//cadena[10] = '\0';

	//puts(cadena);

	////cadena = "Saludos programas!!!";

	//printf("Dame una cadena: ");
	//gets(cadena);

	//puts(cadena);

	//int costo = 50, i, j;
	//int Arreglo[10];
	//int Arreglo2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int matriz[3][3];
	//int matriz2[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };

	//for(i = 0; i < 10; i++)
	//	Arreglo[i] = 0;		//  Inicializacion manual

	//for(i = 0; i < 3; i++)
	//	for(j = 0; j < 3; j++)
	//		matriz[i][j] = j;

	system("pause");
	return 0;
}