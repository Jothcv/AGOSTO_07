#include <stdio.h>
int main(){
    float num1,num2,suma,resta,multi,div;

    printf("ingrese su numero para ver la diferencia ecuaciones: ");
    scanf("%f",&num1);
    printf("ingresa otro numero para hacer las ecuaciones: ");
    scanf("%f",&num2);
    suma=num1+num2;
    resta=num1-num2;
    multi=num1*num2;
    div=num1/num2;
    printf("la suma es: %.2f \n",suma);
    printf("la resta es: %.2f \n",resta);
    printf("la multiplicacion es: %.2f \n",multi);
    printf("la divicion es: %.2f \n",div);

}