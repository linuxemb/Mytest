all:
	gcc -Wall -c hello_zigbee.cpp -o zigbee.o
	g++ -o test *.o


