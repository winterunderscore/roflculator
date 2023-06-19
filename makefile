CC = gcc
CFLAGS := -Wall -Wextra -pedantic

SRC = ./src/main.c
OUT = ./bin/out.exe

.PHONY = all build run

all: build run
build: $(SRC)
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)
run: $(OUT)
	@echo '-------'
	@$(OUT)
