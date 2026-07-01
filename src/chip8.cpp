#include "chip8.hpp"

Chip8::Chip8()
{
 pc = 0x200;
 I  = 0;
 sp = 0;
delayTimer = 0;
soundTimer = 0;
  opcode = 0;
}
void Chip8::Cycle()
{

}