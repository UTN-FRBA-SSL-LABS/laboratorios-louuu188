#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]) {
    (void)argc;
    if (argv[1] == NULL) return 0;
    char *mayor = argv[1];
    for (char **arg = argv + 2; *arg != NULL; arg++)
        if (GetLength(*arg) > GetLength(mayor))
            mayor = *arg;
    printf("%s\n", mayor);
    return 0;
}