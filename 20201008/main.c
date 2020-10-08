#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Dispensa 4
    // // Esempio1.
    // int x;
    // printf("Inserisci un numero intero: ");
    // scanf("%d", &x);
    // fflush(stdin);
    // printf("Numero inserito: %d\n\n\n\n", x);

    // // Esempio2.
    // int ore, minuti;
    // char t;
    // printf("Inserisci orario come ore e minuti: ");
    // scanf(" %2d%c%2d", &ore, &t, &minuti);
    // fflush(stdin);
    // printf("Orario: %02d:%02d.\n", ore, minuti);

    // // Esempio3.
    // char string[11];
    // printf("Inserisci stringa: ");
    // scanf("%[abc]", &string);
    // printf("La tua stringa: %s", string);

    // Dispensa 6
    // // Esempio4.
    // int a = 10, b = 5;
    // int res = 0;
    // res = a > b ? a : b;
    // printf("%d", res);

    // Esempio5.
    char lettera;
    printf("Inserisci una lettera: ");
    scanf("%c", &lettera);

    switch (lettera)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Hai inserito una vocale MINUSCOLA");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Hai inserito una vocale MAIUSCOLA");
        break;
    default:
        printf("Hai inserito una consonante");
        break;
    }

    // Alternativa con if non copmpleta
    // if(lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'o')
    //     printf("vocale minuscola");
    // else if(lettera == 'A' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'o')

    // Termine Programma
    printf("\n\n\n");
    system("PAUSE");
    return 0;
}