/*Il programma deve trovare la mediana tra 3 numeri, ovvero il numero che sta tra il maggiore e il minore.
 *Premessa: in programmazione non c'è sempre un'unica soluzione giusta, questo che propongo è solo uno dei modi possibili.
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
        //In questo caso "a" è il minore.
        if (b < c)
            mediana = b;
        else
            mediana = c;
    } else if (b <= a && b <= c) {
        //In questo caso "b" è il minore.
        if (a < c)
            mediana = a;
        else
            mediana = c;
    } else {
        //In questo caso "c" è il minore.
        if (a < b)
            mediana = a;
        else
            mediana = b;
    }

    printf("Numeri: %i, %i, %i, mediana: %i.\n", a, b, c, mediana);
}
