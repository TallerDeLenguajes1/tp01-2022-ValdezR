#include<stdio.h>
#include<stdlib.h>

int cuadradoX(int x);
void cuadradoY(int *pnumero);
void informacionVariable(int x);
void invertir(int x, int y);
void ordenarMayor(int *p1, int *p2);


int main(){
    
    int a, *pnumero, b;
    pnumero=&a;

    int *puntero1, *puntero2;//Puntero para la funcion void del ejercicio (e)
    puntero1=&a;
    puntero2=&b;
    int resultado;
    printf("Ingrese un numero para trabajar: ");
    scanf("%d",&a);
    resultado=cuadradoX(a);//Funcion que devuelve el cuadrado de un numero dado - ejercicio(a)
    cuadradoY(pnumero);//Funcion VOID que devuelve el cuadrado de un numero dado - ejercicio(b)
    
    printf("\nEl resultado del cuadrado, con la funcion del punto (a) es: %d",resultado);
    printf("\nEl resultado del cuadrado, con la funcion del punto (b) es: %d",*pnumero);

    printf("\nIngrese un numero segundo numero para trabajar: ");
    scanf("%d",&b);
    informacionVariable(b);//Funcion que devuelve informacion de una variable recibida- ejercicio (c)
    invertir(a,b);//Funcion para invertir el orden de los numeros ingresados - ejercicio (d)

    ordenarMayor(puntero1, puntero2);//Funcion para ordenar el menor y mato numero ingresado - ejercicio (e)
    printf("\nEl numero mas chico ingresado es: %d",*puntero1);
    printf("\nEl numero mas grande ingresado es: %d",*puntero2);
    return 0;
}


int cuadradoX(int x){
    return x*x;
}

void cuadradoY(int *pnumero){
    *pnumero=(*pnumero)*(*pnumero);
}

void informacionVariable(int x){
    printf("\nLa direccion de la variable recibida es: %d",&x);
    printf("\nEl contenido de la variable recibida es: %d",x);
}

void invertir(int x, int y){
    int aux;
    aux = x;
    x=y;
    y=aux;
    printf("\nel valor de A es: %d",x);
    printf("\nel valor de B es: %d",y);

}

void ordenarMayor(int *p1, int *p2){
    int aux;
    if (*p1>*p2)
    {
        aux=*p1;
        *p1=*p2;
        *p2=aux;
    }
    
}
