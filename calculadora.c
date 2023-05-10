#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 -  num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operador invalido.");
            return 1;
    }
    printf("%.2f %c %.2f = %.2f", num1, operador, num2, resultado);
    return 0;
}