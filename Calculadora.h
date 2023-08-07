#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TODO_OK 0
#define ERROR_DIV_0 1




void msgIni();
int msgMenu();

int sumar(float*x,float*y,float*rta);
int restar(float*x,float*y,float*rta);
int multiplicar(float*x,float*y,float*rta);
int dividir(float*x,float*y,float*rta);
int potencia(float*x,float*y,float*rta);
int raiz(float*x,float*y,float*rta);
int parteEntera(float*x,float*rta);
int parteDecimal(float*x,float*rta);
int numerosDivisibles(float*x,float*rta);
int esPar(float*x,float*rta);
int cambioSigno(float*x,float*rta);




#endif // CALCULADORA_H_INCLUDED
