#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "util.h"

int Run(_mu_ char* mode, _mu_ int len)
{
    bool appShouldQuit = false;

    while(!appShouldQuit)
    {
        char input[255];

        printf("> ");

        if (fgets(input, sizeof(input), stdin) != NULL)
        {
            input[strcspn(input, "\n")] = '\0';

            if (strcmp(input, "exit") == 0)
            {
                appShouldQuit = true;
            }
            else
            {
                printf("You entered: %s\n", input);
            }
        }
        else
        {
            perror("Error reading input");
            break;
        }
    }

    return 0;
}



int main(int argc, char** argv)
{
    char* mode;
    if(argc < 2)
        mode = "--default";
    else
        mode = argv[1];
    int len = strlen(mode);
    return Run(mode, len);
    
}