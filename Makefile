build_:
	gcc -Wall -Wextra -Werror -pedantic -std=c2x -g -o build/mindmap src/main.c
	

clean:
	rm -f mindmap