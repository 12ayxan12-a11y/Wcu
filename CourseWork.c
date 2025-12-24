#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int uzunluq;
    char simvollar[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!@#$%^&*()-_=+[]{}<>?";

    int simvol_sayi = sizeof(simvollar) - 1;

    printf("Şifrənin uzunluğunu daxil et: ");
    scanf("%d", &uzunluq);

    if (uzunluq <= 0) {
        printf("Yanlış uzunluq!\n");
        return 1;
    }

    srand(time(NULL));

    printf("Yaradılan şifrə: ");
    for (int i = 0; i < uzunluq; i++) {
        int index = rand() % simvol_sayi;
        printf("%c", simvollar[index]);
    }

    printf("\n");
    return 0;
}
