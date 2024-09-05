#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv, char **envp)
{
    char *user = getenv("USER");
    printf("USER: %s", user ? user : "null");
    return 0;
}
