#include "ioport.h"

void other_inner_master() {
	prints("Crab!");
	out8(0x20, 0x20);
}

