bin: main.c
	gcc -pthread $< -o $@

.PHONE: run clean

run: 
	./bin
clean:
	rm bin
