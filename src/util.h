#ifndef UTIL_H
#define UTIL_H 1

#define _mu_ [[maybe_unused]]

void printHelp(_mu_ int verbose)
{
    if (!verbose) {
        printf("MindMap\n");
        printf("Usage:\n");
        printf("  --help                    Show the help menu\n");
        printf("  --add <name>              Add specified node titled: name\n");
        printf("  --add -r <path_to_name>   Add all specified nodes in path to name\n");
    }

    else {
        printf("MindMap\n");
        printf("Usage: mindmap [OPTION] [NODE] \n");
        printf("OPTIONS:");
        printf("\t--help                    Show the help menu\n");
        printf("\t--add <name>              Add specified node titled: name\n");
        printf("\t--add -r <path_to_name>   Add all specified nodes in path to name\n");
    }

}

#endif //end util h