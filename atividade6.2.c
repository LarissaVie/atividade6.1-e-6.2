#include <stdio.h>
#include <string.h>


void inverter_palavra(char *palavra) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;
    char temp;

    while (inicio < fim) {
        temp = palavra[inicio];
        palavra[inicio] = palavra[fim];
        palavra[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char linha[1000];
    char *palavra;
    const char *delimitadores = " ";


    printf("Escreva uma a palavra/frase: ");
    fgets(linha, sizeof(linha), stdin);

 
    linha[strcspn(linha, "\n")] = '\0';


    palavra = strtok(linha, delimitadores);

   
    while (palavra != NULL) {
        
        inverter_palavra(palavra);

       
        printf("%s ", palavra);

        
        palavra = strtok(NULL, delimitadores);
    }

   
    printf("\n");

    return 0;
}
