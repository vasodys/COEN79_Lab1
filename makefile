cc =g++

all: count pattern convert

count: countChars.cpp
	$(cc) -o count countChars.cpp

pattern: pattern.cpp
	$(cc) -o pattern pattern.cpp

convert: convertWords.cpp
	$(cc) -o convert convertWords.cpp

clean: 
	rm -f count pattern convert
