CC=g++
CFLAGS=-c -Wall
LDFLAGS=-lglut -lGL -lGLU
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main.exe

all: $(SOURCES) $(EXECUTABLE) run

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

run:
	chmod +x $(EXECUTABLE) && ./$(EXECUTABLE)
