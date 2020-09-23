#include <stdio.h>
#include "personaje.h"

void capturarEnteros(){
    int enteros[5];
    int suma = 0; 

    for(size_t i = 0; i < 5; i++){
        scanf("%d", &enteros[i]);
        fflush(stdin);
        suma += enteros[i];
    }

    for(size_t i = 0; i < 5; i++) printf("%d\n", enteros[i]);

    printf("Suma: %d\n", suma);
    printf("Promedio: %f\n", suma / 5.0);
}

void mostrar(int n, char cadena[]){
    for(size_t i = 0; i < n; i++) printf("%s\n", cadena);
}


int main(){
    int op;
    char cadena[] = "Hola mundo";
    int n;

    do{
        printf("1) Capturar enteros \n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agrega personaje\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        printf("Opcion: ");
        scanf("%d", &op);
        

        switch (op){
        case 1:
            capturarEnteros();
            break;

        case 2:
            printf("Se repetira n veces la cadena \"%s\"", cadena);
            printf("\nn: ");
            scanf("%d", &n);
            mostrar(n, cadena);
            
            break;
        
        case 3:
            capturarPersonajes();
            break;
        
        case 4:
            mostrarPersonajes();
            break;

        default:
            printf("Opcion incorrecta\n");
            break;
        }
    }while(op != '0');



    return 0;
}