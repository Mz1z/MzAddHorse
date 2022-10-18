all: MzAddHorse


MzAddHorse: MzAddHorse.cpp
	gcc -W -Wall -o MzAddHorse.exe MzAddHorse.cpp

run: MzAddHorse.exe
	./MzAddHorse.exe