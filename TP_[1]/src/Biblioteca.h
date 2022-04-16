

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

int PedirEntero(int*resultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
/// \fn int PedirEntero(int*, char*, char*, int, int, int)
/// \brief Solicita un numero al usuario, lo valida, verifica y devuelve el resultado
/// \param resultado Puntero al resultado alli se dejara el numero ingresado por el usuario
/// \param mensaje Es el mensaje a ser mostrado
/// \param mensajeError Es el mensaje a ser mostrado en caso de error
/// \param minimo Valor minimo aceptado
/// \param maximo Valor maximo aceptado
/// \param reintentos Cantidad de reintentos en caso de error
/// \return En caso de exito (0), en caso de exito (-1)

float IngresarPrecio (char mensaje[],char mensajeError[], int minimo);
/// \fn float IngresarPrecio(char[], char[], int)
/// \brief Solicita un numero al usuario, lo  valida y devuelve el resultado
/// \param mensaje Mensaje a ser mostrado
/// \param mensajeError Mensaje a ser mostrado en caso de error
/// \param minimo Valor minimo aceptado
/// \return Numero ingresado por el usuario validado

float IngresarKilometros(char mensaje[],char mensajeError[], int minimo, int maximo);
/// \fn float IngresarKilometros(char[], char[], int, int)
/// \brief Solicita un numero al usuario, lo  valida y devuelve el resultado
/// \param mensaje Mensaje a ser mostrado
/// \param mensajeError  Mensaje a ser mostrado en caso de error
/// \param minimo Valor minimo aceptado
/// \param maximo Valor maximo aceptado
/// \return Numero ingresado por el usuario validado

float Debito(float precio, float porcentaje);
/// \fn float Debito(float, float)
/// \brief Calcula un porcentaje de descuento deseado
/// \param precio Es el numero validado a ser ingresado
/// \param porcentaje Es el porcentaje a descontar
/// \return Numero con (x) porcentaje de descuento

float Credito(float precio, float porcentaje, float tiempo);
/// \fn float Credito(float, float, float)
/// \brief calcula el interes de un numero en el tiempo deseado
/// \param precio Es el numero validado a ser ingresado
/// \param porcentaje es el porcentaje de interes
/// \param tiempo es el tiempo deseado del interes
/// \return el monto total de interes en (x) cantidad de tiempo

float Bitcoin(float precio);
/// \fn float Bitcoin(float)
/// \brief Calcula la conversion de un numero a bitcion en este caso un btn = 4606954.55
/// \param precio El numero validado a ser ingresado
/// \return El numero ingresado al precio de btn

float PrecioUnitario(float distancia,float precio);
/// \fn float PrecioUnitario(float, float)
/// \brief calcula el valor unitario dividiendo la distancia con el precio
/// \param distancia Numero a validado a ser ingresado
/// \param precio Numero validado a ser ingresado
/// \return

float Diferencia(float precioUno,float precioDos);
/// \fn float Diferencia(float, float)
/// \brief Calcula la diferencia de dos numeros
/// \param precioUno
/// \param precioDos
/// \return diferencia de dos numeros

void InformarResultados(float distancia,float Aerolineas,float debitoUno,float creditoUno,float bitcoinUno,float precioUnitarioUno,float Latam,float debitoDos,float creditoDos,float bitcoinDos,float precioUntarioDos,float diferencia);
/// \fn void InformarResultados(float, float, float, float, float, float, float, float, float, float, float, float)
/// \brief recibe el resultado de todos los calculos y los imprime
/// \param distancia Numero validado a ser ingresado
/// \param Aerolineas Numero validado a ser ingresado
/// \param debitoUno Resultado de funcion Debito
/// \param creditoUno Resultado de funcion Credito
/// \param bitcoinUno Resultado de funcion bitcoin
/// \param precioUnitarioUno Resultado de funcion PrecioUnitario
/// \param Latam Numero validado a ser ingresado
/// \param debitoDos Resultado de funcion Debito
/// \param creditoDos Resultado de funcion Credito
/// \param bitcoinDos Resultado de funcion bitcoin
/// \param precioUntarioDoso Resultado de funcion PrecioUnitario
/// \param diferencia Resultado de la funcion Diferencia
///
void CargaForzada(void);
/// \fn void CargaForzada(void)
/// \brief  funcion que calcula e imprime los datos predefinidos fuera del main


#endif
