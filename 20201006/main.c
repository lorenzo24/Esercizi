Swit#include <stdlib.h>
#include <stdbool.h>
int main()
{
    // stdbool
    bool x = false;

    printf("%d\n", x);

    // switch
    x = true;
    int test = 23;
    switch(x) {
        case 0: 
            printf("Valore falso = 0");
            break;
        case 1:
            printf("Valore vero = 1");
            break;
        default:
            printf("Dagli un valore decente, per favore...");
            break;
    }

    return 0;
}