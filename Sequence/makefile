CC=g++
DEBUG=-g
WARNINGS=-Wall
CREA_OBJ=-c
OBJS=sequence.o app.o

COMPILA_APP=$(CC) $(DEBUG) $(WARNINGS)
COMPILA_OBJ=$(CC) $(DEBUG) $(WARNINGS) $(CREA_OBJ)

all: app clean

app: $(OBJS)
	$(COMPILA_APP) $(OBJS) -o app

app.o: sequence.h app.cpp
	$(COMPILA_OBJ) app.cpp

sequence.o: sequence.h sequence.cpp
	$(COMPILA_OBJ) sequence.cpp

clean:
	rm -f $(OBJS)