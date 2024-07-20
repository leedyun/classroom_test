CXX = g++
CXXFLAGS = -I/usr/include -pthread

all: main

main: src/main.cpp src/calculator.cpp
	$(CXX) $(CXXFLAGS) -o main src/main.cpp src/calculator.cpp

test: tests/test_calculator.cpp src/calculator.cpp
	$(CXX) $(CXXFLAGS) -o test_calculator tests/test_calculator.cpp src/calculator.cpp /usr/lib/libgtest.a /usr/lib/libgtest_main.a
	./test_calculator
