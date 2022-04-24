.cpp.o:	$*.h
	g++	-c $*.cpp

all:	vetorSTL 

vetorSTL:  vetorSTL.o
	g++ -o $@ $^

clean:
	rm vetorSTL *.o