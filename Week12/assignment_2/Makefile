.SUFFIXES: .cpp .o

OBJECTS = json_object.o json_list.o json_dict.o data/Integer.o data/String.o
MAIN = main.o $(OBJECTS)

CXX = g++

DATA = data
TARGET = test

$(TARGET) : $(MAIN)
	$(CXX) -o $(TARGET) $(MAIN)

clean :
	rm -rf $(MAIN) $(TARGET)

json_object.o: json_object.cpp
json_list.o: json_list.cpp
json_dict.o: json_dict.cpp
data/Integer.o: data/Integer.cpp
data/String.o: data/String.cpp
main.o: main.cpp
