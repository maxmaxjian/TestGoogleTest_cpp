CXX = c++
CXXFLAGS = -g -Wall -std=c++11
LD = -lgtest -lpthread
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
PROG = main

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(PROG): $(OBJ)
	$(CXX) $^ -o $@ $(LD)

clean:
	$(RM) *.o $(PROG)
