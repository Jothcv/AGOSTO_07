#include <stdio.h>
//Gabriel
int main(){
    int numero;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("El numero es negativo");
    }
    else{
        printf("El numero es positivo");
    }
}