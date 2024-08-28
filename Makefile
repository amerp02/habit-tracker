OBJS = main.c

CC = gcc

COMPILER_FLAGS = -w

OBJ_NAME = main

debug : $(OBJS)
	$(CC) $(COMPILER_FLAGS) $(OBJS) -o $(OBJ_NAME)

all : $(OBJS)
	$(CC) $(COMPILER_FLAGS) $(OBJS) -o $(OBJ_NAME)
