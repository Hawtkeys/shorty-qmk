#include "print.h"
#include QMK_KEYBOARD_H

void matrix_init_custom(void) {
    // TODO: initialize hardware here
    print("Matrix init\n");
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool matrix_has_changed = false;
    int length = sizeof(*current_matrix) / sizeof(current_matrix[0]);

    // TODO: add matrix scanning routine here
    print("Matrix scan\n");
    // print the current matrix state
    for (int i = 0; i < length; i++) {
        uprintf("0x%04X\n", current_matrix[i]);
    }
    return matrix_has_changed;
}