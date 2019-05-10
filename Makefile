#----- Colors -----
BLACK ="\033[1;30m"
RED ="\033[1;31m"
GREEN ="\033[1;32m"
YELLOW = "\x1b[33m"
BLUE = "\x1b[34m"
MAGENTA = "\x1b[35m"
CYAN ="\033[1;35m"
PURPLE ="\033[1;36m"
WHITE ="\033[1;37m"
EOC ="\033[0;0m"
RESET = "\x1b[0m"
#==================

SRC = task_00.cpp
BINARY = a.out

all:
	@echo $(CYAN)"Start compilation"
	@clang++ $(SRC) -o $(BINARY) # equals to clang++ main.cpp -o build.out
	@echo $(GREEN)"Compiled!"

clean:
	@rm $(BINARY)
