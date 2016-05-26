#include "ioport.h"

void other_inner_slave() {
	prints("Crab!");
	out8(0x20, 0x20);
	out8(0xA0, 0x20);
}

