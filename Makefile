build:
	@mkdir -p bin/
	@gcc -o bin/test -lcgroup src/main.c
	@bin/test
