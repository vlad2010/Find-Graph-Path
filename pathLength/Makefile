BASENAME=getPathLength

SRC=$(BASENAME).cpp 
OBJ=$(BASENAME).o
CC=g++
EXE=$(BASENAME)

all: $(OBJ) 
		$(CC) $(OBJ) -o $(EXE)

$(OBJ): $(SRC)
		$(CC) -std=c++14 -c $(SRC) -o $(OBJ)

clean: 
		rm -f $(OBJ) $(EXE) 
		




