#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long number;

    if (scanf("%lld", &number) != 1) {
        return 1;
    }

    if (number < 0) {
        putchar('-');
        putchar(' ');
        number = llabs(number);
    }

    char buffer[32];
    snprintf(buffer, sizeof(buffer), "%lld", number);

    for (int i = 0; buffer[i] != '\0'; ++i) {
        if (i > 0) {
            putchar(' ');
        }
        putchar(buffer[i]);
    }

    putchar('\n');
    return 0;
}
