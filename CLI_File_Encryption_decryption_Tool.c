#include <stdio.h>

void processFile(char sourceFile[], char outputFile[], char key) {
    FILE *inputFile = fopen(sourceFile, "r");
    FILE *outFile = fopen(outputFile, "w");

    if (inputFile == NULL || outFile == NULL) {
        printf("Can't open the file!\n");
        return;
    }

    char ch;
   
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