void calcularPrediccion(Zona zonas[]) {
    int i;

    for (i = 0; i < ZONAS; i++) {
        zonas[i].prediccion =
            (zonas[i].pm25 * 0.45) +
            (zonas[i].co2 * 0.25) +
            (zonas[i].humedad * 0.10) +
            (zonas[i].temperatura * 0.10) -
            (zonas[i].viento * 0.10);
    }
}

void generarAlertas(Zona zonas[]) {
    int i;

    for (i = 0; i < ZONAS; i++) {
        if (zonas[i].prediccion < 50) {
            strcpy(zonas[i].alerta, "BAJA");
            strcpy(zonas[i].medida, "Calidad del aire aceptable.");
        } else if (zonas[i].prediccion < 100) {
            strcpy(zonas[i].alerta, "MEDIA");
            strcpy(zonas[i].medida, "Evitar actividad fisica intensa al aire libre.");
        } else {
            strcpy(zonas[i].alerta, "ALTA");
            strcpy(zonas[i].medida, "Reducir trafico y evitar exposicion prolongada.");
        }
    }
}