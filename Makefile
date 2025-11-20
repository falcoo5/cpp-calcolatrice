CXX = clang++
SOURCE_FILE = src/hello.cpp
OUTPUT = bin/hello

main: $(SOURCE_FILE)
	$(CXX) $(SOURCE_FILE) -o $(OUTPUT)

clean: $(OUTPUT)
	rm $(OUTPUT)
