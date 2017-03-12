#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

static char input[2048];

int main() {
    /* Print Version and Exit  Information */
    puts("Clisp Version 0.0.0.1");
    puts("Press Ctrl+C to Exit\n");

    while (1) {
        char *input = readline("clisp> ");

        add_history(input);

        printf("No you're a %s\n", input);

        free(input);
    }
}