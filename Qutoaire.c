#include <stdio.h>
#include <string.h>

int main() {
    Zona zonas[ZONAS]; // Declaración del array de estructuras

    printf("===== SISTEMA QUITOAIRE =====\n");

    ingresarDatos(zonas);
    calcularPrediccion(zonas);
    generarAlertas(zonas);
    mostrarResultados(zonas);
    guardarArchivo(zonas);

    printf("\nReporte guardado correctamente en reporte_quitoaire.txt\n");

    return 0;
}
