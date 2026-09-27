ExecutableConfig := -DAI_COMPANION
Target := PS4_AI_Companion.elf
ODir := build
SDir := .
IncDirs := .

CC := gcc
CXX := g++
CFLAGS := -O2 -Wall

all: $(Target)

$(Target): main.cpp
	$(CXX) $(CFLAGS) main.cpp -o $(Target)

clean:
	rm -rf $(Target) $(ODir)
