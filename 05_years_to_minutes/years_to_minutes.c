/*
*/

#include <stdio.h>

int main() {
    int years = 1;
    int minutes = years * 365 * 24 * 60;

    puts("Enter you age in years:");

    scanf("%d", &years);

    printf("%d years is %d minutes\n", years, minutes);

    return 0;
}