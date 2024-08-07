#include <stdio.h>
//Gabriel
int main(){
    int numero;

    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("El numero es par");
    }
    else{
        printf("El numero es impar");
    }
}