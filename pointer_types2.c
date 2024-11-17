#include <stdio.h>

int main() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};
    char *char_pointer;  // Puntero para char
    int *int_pointer;    // Puntero para int

    // Asignación de punteros con tipos incompatibles para obtener un comportamiento específico
    char_pointer = (char *)int_array; // El puntero a char apunta a un arreglo de enteros
    int_pointer = (int *)char_array; // El puntero a int apunta a un arreglo de caracteres

    // Iterar a través del arreglo de caracteres con el puntero de enteros (esto puede producir resultados extraños)
    for(i = 0; i < 5; i++) {
        printf("[integer pointer] points to %p, which contains the char '%c'\n", int_pointer, *int_pointer);
        int_pointer = int_pointer + 1; // Avanzar al siguiente entero
    }

    // Iterar a través del arreglo de enteros con el puntero de caracteres
    for(i = 0; i < 5; i++) {
        printf("[char pointer] points to %p, which contains the integer %d\n", char_pointer, *char_pointer);
        char_pointer = char_pointer + 1; // Avanzar al siguiente carácter
    }

    return 0;
}
