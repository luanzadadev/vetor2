#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){

            setlocale(LC_ALL, "portuguese");

                int valor[5];
                int i;

                for ( i = 0; i < 5; i++)
                {
                    printf("\nDigite os numeros: \n");
                    scanf("%d", &valor[i]);

                    if (valor <= 0)
                    {
                        valor[i] = 0;

                    }
                                        
                }
                
                     for ( i = 0; i < 5; i++)
                     {
                        printf("\nOs numeros são: %d ", valor[i]);

                     }



    return 0;
}

