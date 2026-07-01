#pragma once
#include <array>
#include <cstdint>

class Chip8
{
public:
    Chip8();

private:
std::array<uint8_t, 4096 > memory{};
std::array<uint8_t, 16> V{};
//uint16_t pc;
uint16_t pc{};
};