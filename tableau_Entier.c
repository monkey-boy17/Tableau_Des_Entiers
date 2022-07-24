#include<stdio.h>
#include<stdlib.h>

    int main () {

        int tableau[5];
        int nombre;
        int i;


            for(i = 0; i < 5; i++){

            printf("taper un nombre\n");
            scanf("%d", &nombre);

            tableau[i] = nombre;

            }

            for (i = 0 ; i < 5 ; i++)
                {
                    printf("%d\n", tableau[i]);
                }

                return 0;

            }



