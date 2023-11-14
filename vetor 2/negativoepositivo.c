#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    float num[10];
    int i;
    int negativos = 0;
    float somap = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite os numeros: ");
        scanf("%f", &num[i]);
        if (num[i] < 0)
        {

            negativos++;
        }
        else
        {

            somap += num[i];
        }
    }

    printf("A soma dos numeros positivos são: %f ", somap);
    printf("\nQuantidade de numeros negativos: %i", negativos);
    return 0;
}