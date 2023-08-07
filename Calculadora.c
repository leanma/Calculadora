#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Calculadora.h"


void msgIni()
{
    printf("\n*******************************\n");
    printf("*        \\--WELCOME!!--/      *\n");
    printf("*         \\   O    O  /       *\n");
    printf("*          \\    ^    /        *\n");
    printf("*           \\  ___  /         *\n");
    printf("*           /       \\         *\n");
    printf("*          /         \\        *\n");
    printf("*******************************\n\n");

    system("pause");
}

int msgMenu()
{
    int op;
    system("cls");
    do{
        printf("-------MENU CALCULADORA:-------\n");
        printf("1 ---> Sumar\n");
        printf("2 ---> Restar\n");
        printf("3 ---> Multiplicar\n");
        printf("4 ---> Dividir\n");
        printf("5 ---> Potencia\n");
        printf("6 ---> Raiz\n");
        printf("7 ---> Parte Entera\n");
        printf("8 ---> Parte Decimal\n");
        printf("9 ---> Numeros Divisibles\n");
        printf("10 ---> Determinar si es Par\n");
        printf("11 ---> Cambio de Signo\n");
        printf("0 ---> Salir\n");
        printf("Ingrese la opcion deseada:\t");

        scanf("%d",&op);
        if(op<0 || op>11)
        {
            system("cls");
            printf("\nOPCION NO VALIDA\n");
        }
    }while(op<0 || op>11);


    return op;
}



int sumar(float*x,float*y,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------SUMAR-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("VALOR X --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    printf("VALOR Y --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *y=*rta;
    else
        *y=atof(temp);

    *rta = *x + *y;

    printf("RESULTADO --> %.2f\n",*rta);
    system("pause");
    return TODO_OK;
}


int restar(float*x,float*y,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------RESTAR-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("VALOR X --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    printf("VALOR Y --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *y=*rta;
    else
        *y=atof(temp);

    *rta = *x - *y;

    printf("RESULTADO --> %.2f\n",*rta);
    system("pause");
    return TODO_OK;
}

int multiplicar(float*x,float*y,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------MULTIPLICAR-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("VALOR X --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    printf("VALOR Y --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *y=*rta;
    else
        *y=atof(temp);

    *rta = *x * *y;

    printf("RESULTADO --> %.2f\n",*rta);
    system("pause");
    return TODO_OK;
}

int dividir(float*x,float*y,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------MULTIPLICAR-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("VALOR X --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    printf("VALOR Y --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *y=*rta;
    else
        *y=atof(temp);

    if(*y==0)
    {
        printf("ERROR SI INTENTO DIVIDIR POR 0\n");
        return ERROR_DIV_0;
    }

    *rta = *x / *y;

    printf("RESULTADO --> %.2f\n",*rta);
    system("pause");
    return TODO_OK;
}

int potencia(float*x,float*y,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------POTENCIA-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("BASE --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    printf("EXPONENTE--> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *y=*rta;
    else
        *y=atof(temp);

    *rta=pow(*x,*y);


    printf("RESULTADO --> %.4f\n",*rta);
    system("pause");
    return TODO_OK;
}

int raiz(float*x,float*y,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------RAIZ-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("NUMERO --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    printf("INDICE--> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *y=*rta;
    else
        *y=atof(temp);

    *rta=pow(*x,1.0 / *y);


    printf("RESULTADO --> %.4f\n",*rta);
    system("pause");
    return TODO_OK;
}

int parteEntera(float*x,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------PARTE ENTERA-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("NUMERO --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    *rta=(float)(int)*x;

    printf("RESULTADO --> %.0f\n",*rta);
    system("pause");
    return TODO_OK;
}

int parteDecimal(float*x,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------PARTE DECIMAL-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("NUMERO --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    *rta=*x-(float)(int)*x;

    printf("RESULTADO --> %f\n",*rta);
    system("pause");
    return TODO_OK;
}

int numerosDivisibles(float*x,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------NUMEROS DIVISIBLES DE UN NUMERO-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("NUMERO --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    *rta=0.0;
    printf("NUMEROS DIVISIBLES -->\t\t");
    for(int i=1;i<=(int)*x;i++)
    {
        if((int)*x%i==0)
        {
            printf("%d\t",i);
            *rta+=1;
        }
    }
    printf("\nCANTIDAD DE N DIVISIBLES -->\t%.0f\n",*rta);
    system("pause");
    return TODO_OK;
}

int esPar(float*x,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------EL NUMERO ES PAR O IMPAR?-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("NUMERO --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    if((int)*x%2==0)
        printf("\nEL NUMERO ES PAR\n");
    else
    {
        printf("\nEL NUMERO ES IMPAR\n");

    }
    *rta=*x;
    system("pause");
    return TODO_OK;
}

int cambioSigno(float*x,float*rta)
{
    char temp[100];

    system("cls");
    printf("-------------------CAMBIO DE SIGNO-------------------\n");
    printf("Ingresar 'ans' para usar valor en memoria\n");
    printf("Valor en memoria: %.2f\n",*rta);

    printf("NUMERO --> ");
    fflush(stdin);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';

    if(strcasecmp(temp,"ans")==0)
        *x=*rta;
    else
        *x=atof(temp);

    *rta=-*x;

    printf("\nRESULTADO--> %.2f\n",*rta);
    system("pause");
    return TODO_OK;
}
