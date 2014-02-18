main: main.o SkipList.o
	g++ -Wall -g main.o SkipList.o -o main 

main.o: SkipListTest.cpp SkipList.hpp
	g++ -Wall -g -c SkipListTest.cpp -o main.o

SkipList.o: SkipList.cpp SkipList.hpp
	g++ -Wall -g -c SkipList.cpp -o SkipList.o

clean:
	rm -f *.o
