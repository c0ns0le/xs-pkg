#ifndef Translator_H
#define Translator_H

#include <stdint.h>

//******************************************************************************

const uint8_t SignatureSize = 10;
const uint8_t MaxCommands = 31;
const uint8_t Higher = 1;
const uint8_t Lower  = 0;

//******************************************************************************
//
//
//
//
//******************************************************************************
uint32_t* ReadBin ( const char* File, uint32_t* BinSize );
//******************************************************************************
//
//
//
//
//******************************************************************************
int ConvertLabel16bit ( uint32_t* BinFile ); 

//******************************************************************************

#endif
