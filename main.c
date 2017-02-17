#include <stdio.h>

static char input[2048];

int main() {
    /* Print Version and Exit  Information */
    puts("Clisp Version 0.0.0.1");
    puts("Press Ctrl+C to Exit\n");

    while (1) {
        fputs("clisp> ", stdout);
        fgets(input, 2048, stdin);
        printf("No you're a %s", input);
    }
}