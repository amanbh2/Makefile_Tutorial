app: main.o fun.o
	gcc -o ./bin/app.exe ./obj/main.o ./obj/fun.o
fun.o: ./src/fun.c
	gcc -o ./obj/fun.o ./src/fun.c -c
main.o: ./src/main.c
	gcc -o ./obj/main.o ./src/main.c -c
clean:
	@echo "Cleaning executables and object files."
	rm ./bin/*.exe ./obj/*.o