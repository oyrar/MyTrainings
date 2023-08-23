all:

TARGET=main

# Setting build

AR=gcc
CC=gcc
LD=gcc

CFLAGS+=-MMD
LDFLAGS+=

INTERMEDIATE_DIRECTORY=obj

# Setting target of build

SRCS=main.c

OBJS=
OBJS+=$(patsubst %.c,obj/%.o,$(SRCS))

DEPS=
DEPS+=$(patsubst %.o,%.d,$(OBJS))

# make rule

obj/%.o: %.c
	mkdir -p $(INTERMEDIATE_DIRECTORY) && $(CC) $(CFLAGS) -c $< -o $@

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

