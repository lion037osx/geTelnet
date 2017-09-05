CXX=gcc
INCLUDE=.
CXXFLAGS=-g -Wall -ansi
OBJS=tcpserver.o

app: tcpserver.o
	$(CXX) -c tcpserver.c
	$(CXX) -o tcpserver tcpserver.o


	$(CXX) -c  tcpclient.c
	$(CXX) -o tcpclient tcpclient.o

	@echo "			Compile Success!!! tcpclient"
	@echo "			 Copyrigth Leo ,nov 2015"
#clean: