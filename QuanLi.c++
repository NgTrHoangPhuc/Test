#include <stdio.h>

void Mang2Chieu() {
    int dong, cot;
    FILE *file;

    file = fopen("dulieu.txt", "w");

    printf("\nNhap dong cho file: ");
    scanf("%d", &dong);
    printf("\nNhap cot cho file: ");
    scanf("%d", &cot);
    fprintf(file, "%d", dong);
    fprintf(file, "\n%d", cot);
}

int main () {
    Mang2Chieu();
    return 0;
}