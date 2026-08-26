
#include <stdio.h>

void processFile(char sourceFile[], char outputFile[], char key) {
    FILE *inputFile = fopen(sourceFile, "r");
    if (inputFile == NULL) {
        printf("Can't open input file: %s\n", sourceFile);
        return;
    }

    FILE *outFile = fopen(outputFile, "w");
    if (outFile == NULL) {
        printf("Can't open output file: %s\n", outputFile);
        fclose(inputFile);
        return;
    }

    int ch;  // must be int, not char, so EOF comparison works correctly

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch ^ key, outFile);
    }

    fclose(inputFile);
    fclose(outFile);
    printf("Completed successfully: %s\n", outputFile);
}

int main() {
    char secretKey = 'S';

    processFile("secret.txt", "encrypted.txt", secretKey);
    processFile("encrypted.txt", "decrypted.txt", secretKey);

    return 0;
}