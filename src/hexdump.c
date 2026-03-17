#include <stdio.h>
#include <stdlib.h>
#include "hexdump.h"

int dump() {
    FILE *file_ptr;
    file_ptr = fopen("tests/sample.txt", "r");

    if (file_ptr == NULL) {
        printf("Error opening file\n");
        return EXIT_FAILURE;
    }

    char c;
    char offset = 0;
    while ((c = fgetc(file_ptr)) != EOF) {
        // print every char to console
        // new row every 16 bytes, or when \n char is found
        if ((offset % 15) == 0) {
            for (int i = 0; i < 8; i++) {
                printf()
            }
            printf("%X", offset);
        }
        printf("%X", c);
        printf(" ");
        offset += 1;
    }
    return EXIT_SUCCESS;
}