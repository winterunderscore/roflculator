CC = gcc
CFLAGS := -Wall

SRC = ./src/main.c
OUT = ./bin/out.exe

.PHONY = all build run

all: build run
build:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)
run: 
	$(OUT)
