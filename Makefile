main: main.o A.o
	g++ -o main main.o A.o
main.o: main.cpp A.h
	g++ -c main.cpp
A.o: A.cpp A.h
	g++ -c A.cpp
clean:
	rm main.o A.o
