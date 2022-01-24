#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int chute;
    int contador = 0;
    
    printf ("Insira um número para advinharem: ");
    scanf ("%d", &numero);
    
    system("clear");
    
    for ( ; chute != numero && chute !=0; ) {
        
        printf ("Tente advinhar o número: ");
        scanf ("%d", &chute);
    contador++;
        if (chute == numero) {
            printf ("Acertou o numero com %d palpites!\n", contador);
        } else if (chute < numero) {
            printf ("Errou!, era um numero maior!\n");
        } else if (chute > numero) {
            printf ("Errou!, era um numero menor\n"); }
    }

    return 0;
}
