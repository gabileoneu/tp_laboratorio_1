//Alegre Bartolucci,Matias 1B
#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#define DEBITO 0.1
#define CREDITO 0.25

int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	int respuesta;
	float distancia;
	float aerolineas;
	float latam;
	float debitoAerolineas;
	float debitoLatam;
	float creditoAerolineas;
	float creditoLatam;
	float btcAerolineas;
	float btcLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferencia;
	int subMenu;
	int opcionDos;
	distancia=0;
	aerolineas=0;
	latam=0;

	do{
	respuesta = PedirEntero(&opcion,"\n1.Ingresar kilometros: (KM=0.00)\n2.Ingresar Precio de Vuelos\n3.Cacular todos los costos:\n4.Informar Resultados\n5.Carga forzada de datos\n6.salir\n-Seleccione una opcion:  \n"," No es una opcion valida",1,6,2);
	if(!respuesta)
	{
		switch(opcion)
		{
		case 1:
			distancia=IngresarKilometros("ingrese los kilometros:","No es una distancia valida",1,40000);
			break;
		case 2:
			subMenu=PedirEntero(&opcionDos,"\n1.Aerolineas\n2.Latam\n","No es una opcion valida",1,2,2);
            if(!subMenu)
            {
			switch(opcionDos)
			{
			case 1:
				aerolineas=IngresarPrecio("Precio Vuelo Aerolineas: ","el precio debe ser mayor a 0",1);
			break;
			case 2:
				latam=IngresarPrecio("Precio Vuelo Latam: ","el precio debe ser mayor a 0",1);
			break;
			}
            }
			break;
		case 3:
			if(distancia==0 || aerolineas ==0 || latam ==0)
			{
		  	 printf("No es posible calcular los costos, ingrese todos los datos");
			}
			else
			{
				debitoAerolineas=Debito(aerolineas,DEBITO);
				creditoAerolineas=Credito(aerolineas,CREDITO,1);
				btcAerolineas=Bitcoin(aerolineas);
				precioUnitarioAerolineas=PrecioUnitario(distancia,aerolineas);
				debitoLatam=Debito(latam,DEBITO);
				creditoLatam=Credito(latam,CREDITO,1);
				btcLatam=Bitcoin(latam);
				precioUnitarioLatam=PrecioUnitario(distancia,latam);
				diferencia=Diferencia(aerolineas,latam);
			}
			break;
		case 4:
			InformarResultados(distancia, aerolineas,debitoAerolineas,creditoAerolineas,btcAerolineas,precioUnitarioAerolineas,latam,debitoLatam,creditoLatam,btcLatam,precioUnitarioLatam,diferencia);
			break;
		case 5:
			CargaForzada();
			break;
		}
	}
	}while(opcion !=6);
	return EXIT_SUCCESS;
}
