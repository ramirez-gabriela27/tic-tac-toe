CXX = g++
CXXFLAGS	= -std=c++17 -Wall
CXXTESTFLAGS = --coverage # can be used to generate files that help calculate unit test coverage
CXXGDB = -ggdb

all: test

clean:
	rm test

test: TicTacToe.cpp
	$(CXX) $(CXXFLAGS) TicTacToe.cpp -o test
