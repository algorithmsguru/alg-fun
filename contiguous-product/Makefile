CXX := g++
CXXFLAGS := -std=c++11 -g

BINARY := contiguous-product

all: $(BINARY) test

clean:
	rm -f $(BINARY) *.o

.PHONY: clean

$(BINARY): test.cpp solution.hpp
	$(CXX) $(CXXFLAGS) $< -o $@

test:
	`pwd`/$(BINARY) < `pwd`/test.dat
