#include <stdio.h>
int main () 
{
    /* Alondra Mongaray Rodriguez 
    Equipo AMUKE
    21 abr 21
    Programa 4. Pide dos valores reales, calcula multiplica, divide y muestra resultado
    */

   float primer, segundo, multiplica, division;
    printf ("\n\n Programa 4");
    printf ("\n\n Saca el promedio de valores reales");
    printf ("\n\n Dame el primer valor real ");
    scanf ("%f",&primer); //Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el segundo valor real ");
    scanf ("%f",&segundo); //Permite capturar un valor real y lo guarda en variable primer
    multiplica = primer * segundo;
    division = primer / segundo;
    printf ("\n El producto es %f", multiplica);
    printf ("\n El cociente es %f", division);

    return 0;
    }