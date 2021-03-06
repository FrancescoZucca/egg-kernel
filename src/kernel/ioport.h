#ifndef __IOPORT_H
#define __IOPORT_H

#include "kernel.h"

extern uint8_t inb(uint16_t port);
extern void outb(uint16_t port, uint8_t data);

#endif