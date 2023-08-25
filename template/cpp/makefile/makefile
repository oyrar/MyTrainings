all:

TARGET=main

# Setting build

AR=g++
CXX=g++
LD=g++

CFLAGS+=
CPPFLAGS+=$(CFLAGS) -std=c++20 -MMD
LDFLAGS+=

INTERMEDIATE_DIRECTORY=obj

# Setting target of build

SRCS=main.cpp

OBJS=
OBJS+=$(patsubst %.cpp,obj/%.o,$(patsubst %.CC,obj/%.o,$(SRCS)))

DEPS=
DEPS+=$(patsubst %.o,%.d,$(OBJS))

# make rule

obj/%.o: %.CC
	mkdir -p $(INTERMEDIATE_DIRECTORY) && $(CXX) $(CPPFLAGS) -c $< -o $@

obj/%.o: %.cpp
	mkdir -p $(INTERMEDIATE_DIRECTORY) && $(CXX) $(CPPFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(TARGET)

all: $(TARGET)

clean:
	rm -fv $(TARGET)
	rm -fv $(OBJS)
	rm -fv $(DEPS)
	rm -rfv $(INTERMEDIATE_DIRECTORY)

# dependecies files

-include $(DEPS)

