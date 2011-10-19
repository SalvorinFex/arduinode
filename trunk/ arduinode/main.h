/* 
 * Copyright (c) 2011, Jan Clement
 * licenced under the GPL
 *
 * Author: Jan Clement <jan.clement@audiokits.de>
 *
 * This file is part of the arduiNode library
 * http://code.google.com/p/arduinode/
 */

#ifndef main.h
#define main.h



#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/signal.h>
#include <stdlib.h>
#include <pt.h>
#include "config.h"

#define CLR(x,y) (x&=(~(1<<y)))
#define SET(x,y) (x|=(1<<y))

#define uchar unsigned char
#define uint unsigned int

// config DEBUG level
#define RAWMODE 0
#define DEBUGMODUS 0
#define BYTEDEBUGMODUS 0
#define CONNECTDEBUGMODUS 1

#define MASTER 1
#define SLAVE 0
extern unsigned char NODETYPE;

/************************************************************************
 * USESTATICID 1 gives smaller code sizes but cancels dynamic ids       *
 * USESTATICID 0 will allocate ids automatic to all discovered nodes    *
 ************************************************************************/
#define USESTATICID 0

#if RAWMODE || DEBUGMODUS || BYTEDEBUGMODUS || CONNECTDEBUGMODUS
#define SERIALCONSOLE 1
#else
#define SERIALCONSOLE 0
#endif

#endif
