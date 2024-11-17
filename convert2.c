#include <stdio.h>
#include <stdlib.h> // Necesario para la función exit y atoi

void usage(char *program_name) {
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
    exit(1); // Termina el programa si los argumentos no son correctos
}

int main(int argc, char *argv[]) {
    int i, count;

    // Verifica si se pasaron menos de 3 argumentos (programa, mensaje, número de repeticiones)
    if(argc < 3) {
        usage(argv[0]); // Si no, muestra el mensaje de uso y termina el programa
    }

    // Convierte el segundo argumento (número de repeticiones) a un entero
    count = atoi(argv[2]);

    // Imprime cuántas veces se repetirá el mensaje
    printf("Repeating %d times..\n", count);

    // Repite el mensaje el número de veces especificado
    for(i = 0; i < count; i++) {
        printf("%3d - %s\n", i, argv[1]); // Muestra el mensaje junto con su número de repetición
    }

    return 0; // Termina el programa correctamente
}
