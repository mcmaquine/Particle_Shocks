#my makefile
# the build target executable:
TARGET = shocks

# the compiler: g++ for C++
CPP = g++

# Include sources
INCLUDE = 	-Iinclude/

# compiler flags
#	-g	adds debugging information to the executble file
#	-Wall	turns on most, but not al, compiler warnings
CFLAGS	=	-c

#link flags
LINK	=	-lsfml-graphics -lsfml-window -lsfml-system

# generate the executable
all: $(TARGET)

# link
$(TARGET): $(TARGET).o
	$(CPP) $(TARGET).o -o $(TARGET) $(LINK)	
	
# build
$(TARGET).o: clean
	$(CPP) $(CFLAGS) $(INCLUDE) src/$(TARGET).cpp

clean:
	$(RM) $(TARGET) *.o
