#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int bandera1=0;
    int bandera2=0;
    int a;
    int b;
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf ("ingrese primer numero: ");
                scanf("%i\n", &a);
                bandera1= 1;
                break;
            case 2:
                printf ("ingrese segundo numero: ");
                scanf("%i\n", &b);
                bandera2= 1;
                break;
            case 3:
                if(bandera1 == 1 && bandera2==1 )
                {
                    printf(" el resultado de la suma es:  %i\n\n", suma(a , b) );
                }
                else
                {
                    printf("\n\nfalta ingresar un operando, cargue ambos numeros!! \n\n");
                }
                break;
            case 4:
                   if(bandera1 == 1 && bandera2==1 )
                {
                    printf(" el resultado de la resta es:  %i\n\n", resta(a , b) );
                }
                else
                {
                    printf("\n\nfalta ingresar un operando, cargue ambos numeros!! \n\n");
                }
                break;
            case 5:
                       if(bandera1 == 1 && bandera2==1 )
                {
                       if(b==0)
                        {
                            printf("no es posible dividir por cero\n\n ");
                        }
                       else
                       {
                         printf(" el resultado de la division es:  %.3f\n\n", division(a , b) );
                       }

                }
                else
                {
                printf("\n\nfalta ingresar un operando, cargue ambos numeros\n\n!!");
                }
                break;
            case 6:
                if(bandera1 == 1 && bandera2==1 )
                {
                    printf(" el resultado de la multiplicacion es:  %i\n\n", multiplicacion(a , b) );
                }
                else
                {
                    printf("\n\nfalta ingresar un operando, cargue ambos numeros!! \n\n");
                }
                break;
            case 7:
                 if(bandera1 == 1 )
                 {
                     printf(" el resultado del factorial es:  %i\n\n" , factorial(a));
                 }
                 else
                 {
                     printf(" \n\n no ingreso un numero, es imposible calcular el factorial!!!\n\n ");
                 }

                break;
            case 8:
                 if(bandera1 == 1 && bandera2== 1 )
                 {

                  printf(" el resultado de la suma es:  %i\n\n", suma(a , b) );
                  printf(" el resultado de la resta es:  %i\n\n", resta(a , b) );

                  if(b==0)
                        {
                            printf("no es posible dividir por cero \n\n");
                        }
                       else
                       {
                         printf(" el resultado de la division es:  %.3f\n\n", division(a , b) );
                       }
                  printf(" el resultado de la multiplicacion es:  %i\n\n", multiplicacion(a , b) );
                  printf(" el resultado del factorial es:  %i\n\n" , factorial(a));

                 }
                 else
                    {
                    printf("no es posible realizar el calculo con un solo operando \n\n");
                    }

                break;
            case 9:
                seguir = 'n';
                break;
        }

}
    return 0;

}
