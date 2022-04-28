#include<stdio.h>

int main(){
    int *pNum, numero=93;
    pNum=&numero;
    printf("Hola mundo");

    printf("\nEl contenido del puntero es: %p",pNum);

    printf("\nLa direccion de memoria almacenada por el puntero: %p",&numero);

    printf("\nLa direccion de memoria de la variable es: %d",&numero);

    printf("\nLa direccion de memoria del puntero es: %d", &pNum);

    printf("\n:El tamanio de memoria utilizado por la variable es: %d",sizeof(numero));

    return 0;
}