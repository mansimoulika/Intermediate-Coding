#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mergeS(char *str1, char *str2, char *outputFile) {
    FILE *file = fopen(outputFile, "w");
    if (!file) {
        printf("Error: Unable to open file %s\n", outputFile);
        return;
    }
    int i = 0, j = 0;
    while (str1[i] && str2[j]) {
        fputc(str1[i++], file);
        fputc(str2[j++], file);
    }
    while (str1[i]) fputc(str1[i++], file);
    while (str2[j]) fputc(str2[j++], file);
    fclose(file);
}
int main() {
    char str1[100], str2[100], outputFile[100];
    printf("Enter the first string: ");
    scanf("%99s", str1);
    printf("Enter the second string: ");
    scanf("%99s", str2);
    printf("Enter the name of the output file: ");
    scanf("%99s", outputFile);
    mergeS(str1, str2, outputFile);
    printf("Merged string written to %s\n", outputFile);
return 0;
}
