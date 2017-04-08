#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#endif // FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

/** \brief ESTA FUNCION SUMA 2 NUMERO ENTEROS
 *
 * \param ES EL PRIMER NUMERO ENTERO
 * \param ES EL SEGUNDO NUMERO ENTERO
 * \return LA SUMA RETORNA UN NUMERO ENTERO
 *
 */
int suma (int x , int y)
{
int resultado;
resultado = x + y ;
return resultado;


}
/** \brief ESTA FUNCION RESTA 2 NUMERO ENTEROS
 *
 * \param ES EL PRIMER NUMERO ENTERO
 * \param ES EL SEGUNDO NUMERO ENTERO
 * \return LA RESTA RETORNA UN NUMERO ENTERO
 *
 */

int resta (int x , int y)
{
int resultado;
resultado = x - y ;
return resultado;


}

/** \brief ESTA FUNCION MULTIPLICA 2 NUMERO ENTEROS
 *
 * \param ES EL PRIMER NUMERO ENTERO
 * \param ES EL SEGUNDO NUMERO ENTERO
 * \return LA MULTIPLICACION RETORNA UN NUMERO ENTERO
 *
 */

int multiplicacion (int x , int y)
{
int resultado;
resultado = x * y ;
return resultado;


}
/** \brief ESTA FUNCION DIVIDE 2 NUMERO ENTEROS
 *
 * \param ES EL PRIMER NUMERO ENTERO
 * \param ES EL SEGUNDO NUMERO ENTERO
 * \return LA DIVISION RETORNA UN NUMERO FLOTANTE
 *
 */


float division (int x , int y)
{
float resultado;
resultado = (float)x / y ;
return resultado;


}
/** \brief ESTA FUNCION CALCULA EL FACTORIAL
 *
 * \param ES EL PRIMER NUMERO ENTERO
 * \return EL FACTORIAL RETORNA UN NUMERO ENTERO
 *
 */

int factorial (int x)
{

  int resultado;

     if(x!= 1)
     {

        resultado= x * factorial(x-1);

     }
     else
     {
        resultado = 1 ;

     }

     return resultado;



}



