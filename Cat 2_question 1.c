/*
NAME: ALEX KIMANA WANJIKU 
REG NO: CT100/G/26186/25
Description: Program for arrays
*/
#include <stdio.h>

int main() {
    int scores1[2][2] = {{65, 92}, {84, 72}};
    int scores2[2][2] = {{35, 70}, {56, 67}};
    int i, j;

    printf("Elements of the first matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("\n");
    }

    printf("Elements of the second matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}