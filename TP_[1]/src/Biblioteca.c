
#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"


int PedirEntero(int* resultado, char* mensaje, char* mensajeError, int minimo, int maximo,int reintentos)
{
	int retorno= -1;
	int bufferInt;
	if(resultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
 	 {

	do{

		printf("%s",mensaje);
		scanf("%d",&bufferInt);
		if(bufferInt >= minimo && bufferInt <= maximo)
		{
			*resultado = bufferInt;
			retorno = 0;
			break;
		}
		else
		{
			printf("%s",mensajeError);
			reintentos--;
		}

		}while(reintentos >= 0);
 	 }

	return retorno;
}

float IngresarPrecio(char mensaje[],char mensajeError[], int minimo)
{
	float numeroIngresado;

	printf("%s",mensaje);
	scanf("%f",&numeroIngresado);

		while(numeroIngresado < minimo)
		{
			printf("%s",mensajeError);
			scanf("%f",&numeroIngresado);
		}
		return numeroIngresado;
}

float IngresarKilometros(char mensaje[],char mensajeError[], int minimo, int maximo)
{
	float numeroIngresado;

	printf("%s",mensaje);
	scanf("%f",&numeroIngresado);

		while(numeroIngresado < minimo || numeroIngresado > maximo)
		{
			printf("%s",mensajeError);
			scanf("%f",&numeroIngresado);
		}
		return numeroIngresado;
}

float Debito(float precio, float porcentaje)
{
	float modulo;
	float descuento;
	modulo= precio * porcentaje;
	descuento= precio - modulo;
	return descuento;
}

float Credito(float precio, float porcentaje, float tiempo)
{
    float monto;

    monto = (precio*porcentaje*tiempo)+precio;

    return monto;
}

float Bitcoin(float precio)
{
    float resultado;
    float bitcoin;
    bitcoin =4606954.55;

    resultado= precio / bitcoin;

    return resultado;
}

float PrecioUnitario(float distancia,float precio)
{
    float resultado;
    resultado=precio/distancia;
    return resultado;
}

float Diferencia(float precioUno,float precioDos)
{
    float resultado;
    resultado=precioUno-precioDos;
    return resultado;
}

void InformarResultados(float distancia,float Aerolineas,float debitoUno,float creditoUno,float bitcoinUno,float precioUnitarioUno,float Latam,float debitoDos,float creditoDos, float bitcoinDos,float precioUnitarioDos,float diferencia)
{

	printf("KMS Ingresados: %.2f\n\n",distancia);
	printf("Precio Aerolineas: %.2f\n",Aerolineas);
	printf("a)Precio con tarjeta de debito: %.2f\n",debitoUno);
	printf("b)Precio con tarjeta de credito: %.2f\n",creditoUno);
    printf("c)Precio pagando con bitcoin: %.2f\n",bitcoinUno);
    printf("d)Mostrar precio unitario: %.2f\n\n",precioUnitarioUno);

	printf("Precio Latam: %.2f\n",Latam);
	printf("a)Precio con tarjeta de debito: $%.2f\n",debitoDos);
	printf("b)Precio con tarjeta de credito: $%.2f\n",creditoDos);
    printf("c)Precio pagando con bitcoin: $%.2f\n",bitcoinDos);
	printf("d)Mostrar precio unitario: $%.2f\n\n",precioUnitarioDos);
	printf("La diferencia de precio es: $%.2f\n",diferencia);

}


void CargaForzada(void)
{
    float aerolineas;
    float latam;
    float distancia;
    float debitoAerolineas;
    float debitoLatam;
    float creditoAerolineas;
    float creditoLatam;
    float bitcoinAerolineas;
	float bitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferencia;


    aerolineas=162965;
    latam=159339;
    distancia=7090;

    debitoAerolineas= Debito(aerolineas,0.1);
    debitoLatam= Debito(latam,0.1);
    creditoAerolineas=Credito(aerolineas,0.25,1);
    creditoLatam=Credito(latam,0.25,1);
    bitcoinAerolineas=Bitcoin(aerolineas);
    bitcoinLatam=Bitcoin(latam);
    precioUnitarioAerolineas=PrecioUnitario(distancia,aerolineas);
    precioUnitarioLatam=PrecioUnitario(distancia,latam);
    diferencia=Diferencia(aerolineas,latam);

    	printf("KMS Ingresados: %.2f\n\n",distancia);
    	printf("Precio Aerolineas: %.2f\n",aerolineas);
    	printf("a)Precio con tarjeta de debito: %.2f\n",debitoAerolineas);
    	printf("b)Precio con tarjeta de credito: %.2f\n",creditoAerolineas);
        printf("c)Precio pagando con bitcoin: %.2f\n",bitcoinAerolineas);
        printf("d)Mostrar precio unitario: %.2f\n\n",precioUnitarioAerolineas);

    	printf("Precio Latam: %.f\n",latam);
    	printf("a)Precio con tarjeta de debito: $%.2f\n",debitoLatam);
    	printf("b)Precio con tarjeta de credito: $%.2f\n",creditoLatam);
        printf("c)Precio pagando con bitcoin: $%.2f\n",bitcoinLatam);
    	printf("d)Mostrar precio unitario: $%.2f\n\n",precioUnitarioLatam);
    	printf("La diferencia de precio es: $%.2f\n",diferencia);

}










