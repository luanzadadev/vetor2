#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    char nome[2][200];
    int idade[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("\nDigite o um nome: ");
        gets(nome[i]);

        printf("\nDigite uma idade: ");
        scanf("%d", &idade[i]);

        fflush(stdin);
    }

    printf("\nExibindino dados do usuario...\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nNome: %s \n", nome[i]);
        printf("\nIdade: %d\n", idade[i]);
    }

    return 0;
}