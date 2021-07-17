/*Il programma deve trovare la mediana tra 3 numeri, ovvero il numero che sta tra il maggiore e il minore.
 *Premessa: in programmazione non c'� sempre un'unica soluzione giusta, questo che propongo � solo uno dei modi possibili.
 *
 *Questo programma serve a comprendere meglio l'utilizzo del costrutto if-else.
 *
 *
 *
 *
 */

#include <stdio.h>


int main(){

    int a = 20;
    int b = 10;
    int c = 30;

    int mediana = 0;

    if (a <= b && a <= c) {
        //In questo caso "a" � il minore.
        if (b < c)
            mediana = b;
        else
            mediana = c;
    } else if (b <= a && b <= c) {
        //In questo caso "b" � il minore.
        if (a < c)
            mediana = a;
        else
            mediana = c;
    } else {
        //In questo caso "c" � il minore.
        if (a < b)
            mediana = a;
        else
            mediana = b;
    }

    printf("Numeri: %i, %i, %i, mediana: %i.\n", a, b, c, mediana);
}
