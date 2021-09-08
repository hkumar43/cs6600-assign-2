
SCHED_SUFF = -close
OUT = usimm
BINDIR = ../bin
OBJDIR = ../obj
OBJS = $(OBJDIR)/main.o $(OBJDIR)/memory_controller.o $(OBJDIR)/scheduler$(SCHED_SUFF).o
CC = gcc
DEBUG = -g
CFLAGS = -std=c99 -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

$(BINDIR)/$(OUT): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(BINDIR)/$(OUT)
	chmod 777 $(BINDIR)/$(OUT)

$(OBJDIR)/main.o: main.c processor.h configfile.h memory_controller.h scheduler.h params.h
	$(CC) $(CFLAGS) main.c -o $(OBJDIR)/main.o
	chmod 777 $(OBJDIR)/main.o

$(OBJDIR)/memory_controller.o: memory_controller.c utlist.h utils.h params.h memory_controller.h scheduler.h processor.h
	$(CC) $(CFLAGS) memory_controller.c -o $(OBJDIR)/memory_controller.o
	chmod 777 $(OBJDIR)/memory_controller.o

$(OBJDIR)/scheduler$(SCHED_SUFF).o: scheduler$(SCHED_SUFF).c scheduler$(SCHED_SUFF).h utlist.h utils.h memory_controller.h params.h
	$(CC) $(CFLAGS) scheduler$(SCHED_SUFF).c -o $(OBJDIR)/scheduler$(SCHED_SUFF).o
	chmod 777 $(OBJDIR)/scheduler$(SCHED_SUFF).o

clean:
	rm -f $(BINDIR)/$(OUT) $(OBJS)

