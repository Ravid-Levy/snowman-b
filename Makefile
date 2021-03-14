#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

SOURCES=snowman.cpp
OBJECTS=snowman.o

run: test
	./$^

main: mainn
	./$^

mainn: main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o mainn

main.o: main.cpp $(SOURCES)
	$(CXX) $(CXXFLAGS) --compile $< -o $@
test: TestRunner.o StudentTest1.o StudentTest2.o StudentTest3.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test



StudentTest1.cpp:  # Yosef Danan
	curl https://raw.githubusercontent.com/YD5463/System-Programing-2/master/Test.cpp > $@

StudentTest2.cpp: # Shlomo Glick
	curl https://raw.githubusercontent.com/shlomog12/ex1_partA/main/Test.cpp > $@

StudentTest3.cpp: # Eviatar Nachshoni
	curl https://raw.githubusercontent.com/EN555/EX1-c-/master/Test.cpp > $@

tidy:
	clang-tidy $(SOURCES) -checks=bugprone-*,clang-analyzer-*,cppcoreguidelines-*,performance-*,portability-*,readability-* --warnings-as-errors=* --

%.o: %.cpp $(SOURCES)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o test
	rm -f StudentTest*.cpp
