CC=g++
CFLAGS=-c -Wall
LDFLAGS=-lglut -lGL -lGLU

COMMON=../common/app.cpp

OBJECTS=$(SOURCES:.cpp=.o)
COMMON_OBJECTS=$(COMMON:.cpp=.o)

all: $(COMMON) $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(COMMON_OBJECTS) $(OBJECTS)
	$(CC) $(COMMON_OBJECTS) $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

run: all
	chmod +x $(EXECUTABLE) && ./$(EXECUTABLE)
