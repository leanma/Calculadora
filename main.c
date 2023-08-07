#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"



int main()
{
    msgIni();

    int op=msgMenu();

    int ret;
    float result=0,x,y;

    while(op!=0)
    {

        switch (op)
        {
            case 1:
                ret=sumar(&x,&y,&result);

                break;
            case 2:
                ret=restar(&x,&y,&result);
                break;
            case 3:
                ret=multiplicar(&x,&y,&result);
                break;
            case 4:
                ret=dividir(&x,&y,&result);
                break;
            case 5:
                ret=potencia(&x,&y,&result);
                break;
            case 6:
                ret=raiz(&x,&y,&result);
                break;
            case 7:
                ret=parteEntera(&x,&result);
                break;
            case 8:
                ret=parteDecimal(&x,&result);
                break;
            case 9:
                ret=numerosDivisibles(&x,&result);
                break;
            case 10:
                ret=esPar(&x,&result);
                break;
            case 11:
                ret=cambioSigno(&x,&result);
                break;
        }

        if(ret)
        {
            printf("\nCodigo de error: %d\n",ret);
            system("pause");
        }
        op=msgMenu();
    }
    printf("\nPROGRAMA FINALIZADO CON EXITO\nADIOS\n");
    return 0;
}
