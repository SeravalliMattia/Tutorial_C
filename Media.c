/**
 *In questo programma andiamo a utilizzare il ciclo for e un vettore, all'interno del vettore andiamo a mettere alcuni numeri,
 *successivamente andremo a calcolare la media di questi numeri senza chiamarli uno alla volta, ma utilizzando il nostro ciclo for.
 *
 *Immaginiamo di dover calcolare la media dei voti di uno studente delle superiori, voti espressi in decimi.
 */




#include <stdio.h>
#include <stdlib.h>

#define NVOTI 5
/*E' molto importante imparare ad utilizzare il "define" perchè rende le future modifiche al programma più semplici.
 *Se un giorno vorremmo inserire più voti all'interno del programma non servirà altro che modificare NVOTI.
 */



int main(){

    //I voti vengono messi in double dato che spesso vengono dati dimezzati, come 6/7(6.75), 6+(6.25)...
    double voti[NVOTI] = {10, 5, 6.5, 7, 8};
    double media = 0;

    double somma = 0;

    int i; //La nostra variabile per il ciclo for.

    for(i = 0; i < NVOTI; i++){
        somma += voti[i];

    }

    media = somma / NVOTI;

    printf("La media: %.2lf\n", media);

    //Volendo possiamo anche utilizzare un ciclo for per mostrare tutti i voti.

    int j;

    printf("I voti:\n");

    for(j = 0; j < NVOTI; j++){

        printf("%.1lf\n", voti[j]);


    }











}
