#include <stdio.h>

void convertirMoneda(float cantidad, int opcion) {
    float resultado;

    switch(opcion) {
        case 1: // Convertir de quetzales a dólares
            resultado = cantidad / 7.75; // Asumimos 1 USD = 7.75 Q (esto puede cambiar)
            printf("%.2f Quetzales son %.2f Dólares.\n", cantidad, resultado);
            break;
        case 2: // Convertir de quetzales a euros
            resultado = cantidad / 8.65; // Asumimos 1 EUR = 8.65 Q (esto puede cambiar)
            printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
            break;
        case 3: // Convertir de dólares a quetzales
            resultado = cantidad * 7.75;
            printf("%.2f Dólares son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 4: // Convertir de dólares a euros
            resultado = cantidad * 0.94; // Asumimos 1 USD = 0.94 EUR (esto puede cambiar)
            printf("%.2f Dólares son %.2f Euros.\n", cantidad, resultado);
            break;
        case 5: // Convertir de euros a quetzales
            resultado = cantidad * 8.65;
            printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 6: // Convertir de euros a dólares
            resultado = cantidad / 0.94; // Asumimos 1 EUR = 1.06 USD (esto puede cambiar)
            printf("%.2f Euros son %.2f Dólares.\n", cantidad, resultado);
            break;
        default:
            printf("Opción inválida.\n");
    }
}

int main() {
    float cantidad;
    int opcion;

    printf("Conversor de Monedas\n");
    printf("Selecciona la opción de conversión:\n");
    printf("1. Convertir Quetzales a Dólares\n");
    printf("2. Convertir Quetzales a Euros\n");
    printf("3. Convertir Dólares a Quetzales\n");
    printf("4. Convertir Dólares a Euros\n");
    printf("5. Convertir Euros a Quetzales\n");
    printf("6. Convertir Euros a Dólares\n");
    printf("7. Quetzales a pesos Argentinos\n");
    printf("Ingrese su opción (1-6): ");
    scanf("%d", &opcion);

    if (opcion >= 1 && opcion <= 7) {
        printf("Ingrese la cantidad a convertir: ");
        scanf("%f", &cantidad);
        convertirMoneda(cantidad, opcion);
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}
