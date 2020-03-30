#pragma once

#include <GameDev2D.h>
#include <string>

namespace GameDev2D
{
    class Card
    {
    public:
        Card(int suit, int value) : m_Value(value), m_Suit(suit) {}

        void SetSuit(int suit);
        int GetSuit();

        void SetValue(int value);
        int GetValue();

        void Load();
        void Draw();

    private:
        std::string GetFileName();

        Sprite m_Card;
        int m_Suit;
        int m_Value;
    };
}