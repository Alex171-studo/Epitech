CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = calculator.c
EXEC = prog

all:
	@$(CC) $(CFLAGS) $(SOURCE) -o $(EXEC)
	@./$(EXEC)

clean:
	@rm -f $(EXEC)