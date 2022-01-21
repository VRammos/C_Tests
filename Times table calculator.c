#include <stdio.h>

int main() {
    int i;
    int b;
    
    printf ("Insira um numero: ");
    scanf ("%d", &i);
    
    for (b=1;b<11;b++) {
        printf ("%d * %d = %d\n", i, b, b*i); 
    }
    return 0;
}

