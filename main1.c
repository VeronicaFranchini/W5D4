/*
 * Si scriva un programma in linguaggio C che, dato un numero reale d 
 * immesso da tastiera, calcoli e stampi:
 *  1. l’area del quadrato di lato d
 *  2. l’area del cerchio di diametro d
 *  3. l’area del triangolo equilatero di lato d
*/
#include <stdio.h>
#include <math.h>
int main()
{
float d ; /* numero inserito */
float aq, ac, at; /* area quadrato, cerchio, triangolo */
float r ; /* raggio del cerchio */
float rad3_4 ; /* costante pari a radice(3)/4 */
rad3_4 = sqrt(3) / 4 ;
/* Stampa */
printf("Calcolo di aree\n\n") ;
/* Lettura numero */
printf("Immetti il valore di D: ") ;
scanf("%f", &d) ;
/* AREA DEL QUADRATO DI LATO D */
aq = d * d ;
/*AREA DEL CERCHIO DI DIAMETRO D */
/* calcola il raggio del cerchio */
r = d/2 ;
/* calcola l’area del cerchio */
ac = M_PI * ( r * r ) ;
/* nota: il valore di PI greco e’ definito in math.h come M_PI */
/* AREA DEL TRIANGOLO EQUILATERO DI LATO D */
at = rad3_4 * ( d * d ) ;
/*RISULTATO */
printf("\n") ;
printf("Le aree calcolate sono:\n") ;
printf("Area del quadrato di lato %f = %f\n", d, aq) ;
printf("Area del cerchio di diametro %f = %f\n",d, ac) ;
printf("Area del triangolo equilatero di lato %f = %f\n", d, at) ;
return 0;
}
