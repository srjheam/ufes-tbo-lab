GCC_FLAGS = -Wall -Wextra -O3

all: main.c quick_sort.c
	gcc -o main $^ $(GCC_FLAGS)

debug: build-debug

build-release:
	gcc -o main $^ $(GCC_FLAGS)

build-debug:
