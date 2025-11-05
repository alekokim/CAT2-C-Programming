/*
NAME: ALEX KIMANA WANJIKU 
REG NO: CT100/G/26186/25
Description: Program of list of integers
*/
#include <stdio.h>
#include <stdlib.h>

void writeInputFile() {
    FILE *file;
    int numbers[10];

    file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(file, "%d\n", numbers[i]);
    }

    fclose(file);
    printf("Data successfully written to input.txt\n\n");
}

void processNumbers() {
    FILE *inputFile, *outputFile;
    int num, sum = 0, count = 0;
    float average;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    while (fscanf(inputFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(inputFile);

    if (count == 0) {
        printf("No numbers found in input.txt!\n");
        exit(1);
    }

    average = (float)sum / count;

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    fprintf(outputFile, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(outputFile);

    printf("Sum and average successfully written to output\n");
}

void displayFiles() {
    FILE *file;
    char ch;

    printf("Contents of input.txt:\n");
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(file)) != EOF)
        putchar(ch);
    fclose(file);

    printf("\n\nContents of output.txt:\n");
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(file)) != EOF)
        putchar(ch);
    fclose(file);
}
int main() {
    writeInputFile();
    processNumbers();
    displayFiles();

    return 0;
}