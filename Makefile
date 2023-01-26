# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: main test

# runs for "make target1"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
# name of output should be consistent
main: functions_to_implement.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp functions_to_implement.o -o main 

test: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.o -o test

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

# runs for "make clean"
clean:
	rm functions_to_implement.o main test  #include all targets here
