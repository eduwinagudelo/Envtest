#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv, char **envp)
{
    for (int i = 0; envp[i] != NULL; i++) {
        printf("%d : %s\n", i, envp[i]);
    }
    return 0;
}
