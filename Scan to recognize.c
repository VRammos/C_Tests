#include <stdio.h>

int main() {
    
    char letra;
    
    printf ("Insira uma letra: ");
    scanf ("%c", &letra);
    
    if (letra >= 65 && letra <= 90) {
        letra = letra + 32;
    }
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf ("É vogal!");
    } else if (letra >= 97 && letra <= 122) {
        printf ("É consoante!");
    } else if (letra >= 48 && letra <= 57) {
        printf ("É número!");
    } else if ((letra >= 32 && letra < 48) || (letra > 57 && letra < 65) || (letra > 90 && 
    letra < 97) || (letra > 122)) {
        printf ("É símbolo");
    }
    
    return 0;
}
