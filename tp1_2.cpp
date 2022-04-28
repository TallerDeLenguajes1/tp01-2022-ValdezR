#include<stdio.h>
#include<stdlib.h>

int cuadradoX(int x);
void cuadradoY(int *pnumero);
void informacionVariable(int x);
void invertir(int x, int y);


int main(){
    
    int a, *pnumero, b;
    pnumero=&a;
    int resultado;
    printf("Ingrese un numero para calcular el cuadrado del mismo: ");
    scanf("%d",&a);
    resultado=cuadradoX(a);
    cuadradoY(pnumero);
    
    printf(" EL RESULTADO DE X ES: %d",resultado);
    printf("\n EL RESULTADO DE Y ES: %d",resultado);

    printf("\nIngrese un numero para la variable B: ");
    scanf("%d",&b);
    informacionVariable(b);
    invertir(a,b);

    return 0;
}


int cuadradoX(int x){
    return x*x;
}

void cuadradoY(int *pnumero){
    *pnumero=(*pnumero)*(*pnumero);
}

void informacionVariable(int x){
    printf("\nLa direccion de la variable reciida es: %d",&x);
    printf("\nEl contenido de la variable reciida es: %d",x);
}

void invertir(int x, int y){
    int aux;
    aux = x;
    x=y;
    y=aux;
    printf("\nel valor de A es: %d",x);
    printf("\nel valor de B es: %d",y);

}
