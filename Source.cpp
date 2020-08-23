#include <stdio.h>
#include <conio.h>


int main() {
    int k, x = 2;
    printf("Enter Number : ");
    scanf_s("%d", &k);
    printf("Factoring Result : ");
    while (k != 1) {
        while (k % x == 0) {
            printf("%d ", x);
            k = k / x;
        }
        x++;
    }
    printf("\nPress Any Key To Continue . . .");

    return 0;
}