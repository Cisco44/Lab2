Craps : Craps.o
	g++ Craps.o -o Craps

Craps.o : Craps.cpp
	g++ -c Craps.cpp

clean : 
	rm *.o Craps
