#include <stdio.h>
#include <stdint.h> // Para uintptr_t

int pointer_types5() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};
    uintptr_t hacky_nonpointer;

    // Trabajar con char_array
    hacky_nonpointer = (uintptr_t)char_array;  // Obtener la dirección del primer elemento de char_array
    for (i = 0; i < 5; i++) { // Iterar a través de char_array
        printf("[hacky_nonpointer] points to %p, which contains the char '%c'\n", 
               (void *)hacky_nonpointer, *((char *)hacky_nonpointer));
        hacky_nonpointer = hacky_nonpointer + sizeof(char); // Mover hacky_nonpointer al siguiente carácter
    }

    // Trabajar con int_array
    hacky_nonpointer = (uintptr_t)int_array;  // Obtener la dirección del primer elemento de int_array
    for (i = 0; i < 5; i++) { // Iterar a través de int_array
        printf("[hacky_nonpointer] points to %p, which contains the integer %d\n", 
               (void *)hacky_nonpointer, *((int *)hacky_nonpointer));
        hacky_nonpointer = hacky_nonpointer + sizeof(int); // Mover hacky_nonpointer al siguiente entero
    }

    return 0;
}

int main() {
    pointer_types5(); // Llamada a la función
    return 0;
}

