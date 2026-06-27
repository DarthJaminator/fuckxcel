all:
	gcc -Iinclude src/*.c -o bin/program ; ./bin/program
clean:
	rm -f bin/program
run:
	./bin/program
build:
	gcc -Iinclude src/*.c -o bin/program
