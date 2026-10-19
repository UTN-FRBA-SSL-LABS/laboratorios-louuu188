#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]) {
    (void)argc;
    for (char **arg = argv + 1; *arg != NULL; arg++)
        printf("%d\n", GetLength(*arg));
    return 0;
}
