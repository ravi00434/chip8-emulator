#pragma once
#include <array>
#include <cstdint>

class Chip8
{
public:
    Chip8();
  void Cycle();

private:
std::array<uint8_t, 4096 > memory{};
std::array<uint8_t, 16> V{};
//uint16_t pc;
uint16_t pc{};
uint16_t I;
std::array<uint16_t, 16> stack{};
uint8_t sp;
uint8_t delayTimer;
uint8_t soundTimer;
uint16_t opcode;
};