#include <stdio.h>
#include "personaje.h"

void capturarEnteros(){
    int enteros[5];
    int suma = 0; 

    for(size_t i = 0; i < 5; i++){
        scanf("%d", &enteros[i]);
        fflush(stdin);
    }

    for(size_t i = 0; i < 5; i++) printf("%d\n", enteros[i]);

    for(size_t i = 0; i < 5; i++) suma += enteros[i];

    printf("Suma: %d\n", suma);
    printf("Promedio: %f\n", suma / 5.0);
}

void mostrar(int n, char cadena[]){
    for(size_t i = 0; i < n; i++) printf("%s\n", cadena);
}

int main(){
    char op;
    char cadena[20];
    int n;

    do{
        printf("1) Capturar enteros \n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agrega personaje\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        printf("Opcion: ");
        fflush(stdin);
        scanf("%c", &op);
        fflush(stdin);
        

        switch (op){
        case '1':
            capturarEnteros();
            break;

        case '2':
            printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("n: ");
            scanf("%d", &n);
            mostrar(n, cadena);
            break;
        
        case '3':
            capturarPersonajes();
            break;
        
        case '4':
            mostrarPersonajes();
            break;

        default:
            printf("Opcion incorrecta\n");
            break;
        }
    }while(op != '0');



    return 0;
}