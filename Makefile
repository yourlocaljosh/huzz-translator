CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

TARGET = main.exe
SRC = main.cpp
HEADER = huzz.hpp

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
