#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main()
{
    for (int i = 0; environ[i] != NULL; i++) {
        printf("%d : %s\n", i, environ[i]);
    }
    return 0;
}
