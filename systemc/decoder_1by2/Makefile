# Makefile
# Created on: Oct 28, 2016
#      Author: karibe

GTKWAVE := $(shell which gtkwave)
APP := decoder

all: decoder

decoder: prerequisites
	@echo 'building file $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c decoder_1by2.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "$(APP)" decoder_1by2.o -lsystemc
	./$(APP) 30
	gtkwave -c 4 timing_diagram.vcd

prerequisites: 
ifneq "$(GTKWAVE)" "/usr/bin/gtkwave"
	@echo $(GTKWAVE)	
	@echo 'installing gtkwave, please be patient'
	sudo apt-get install -y gtkwave
endif

clean:
	rm $(APP) *.o *.vcd
.PHONY: decoder

















