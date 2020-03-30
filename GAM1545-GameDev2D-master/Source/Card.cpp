#include "Card.h"
#include "Constants.h"

namespace GameDev2D
{
    Card::Card() : m_Value(0), m_Suit(0) {}

    void Card::SetSuit(int suit)
    {
        m_Suit = suit;
    }

    int Card::GetSuit()
    {
        return m_Suit;
    }

    void Card::SetValue(int value)
    {
        m_Value = value;
    }

    int Card::GetValue()
    {
        return m_Value;
    }

    void Card::Load()
    {
        LoadTexture(GetFilename());
        m_Card.SetTexture(GetFilename());
    }

    void Card::Draw()

    std::string Card::GetFilename()
    {
        std::string filename = "card";
        filename.append(SUIT_STRINGS[m_Suit]);
        filename.append(VALUE_STRINGS[m_Value]);
        return filename;
            //if (m_Value == 1)
                //std::cout << "Ace of ";
            //if (m_Value == 2)
                //std::cout << "Two of ";
            //if (m_Value == 3)
                //std::cout << "Three of ";
            //if (m_Value == 4)
                //std::cout << "Four of ";
            //if (m_Value == 5)
                //std::cout << "Five of ";
            //if (m_Value == 6)
                //std::cout << "Six of ";
            //if (m_Value == 7)
                //std::cout << "Seven of ";
            //if (m_Value == 8)
                //std::cout << "Eight of ";
            //if (m_Value == 9)
                //std::cout << "Nine of ";
            //if (m_Value == 10)
                //std::cout << "Ten of ";
            //if (m_Value == 11)
                //std::cout << "Jack of ";
            //if (m_Value == 12)
                //std::cout << "Queen of ";
            //if (m_Value == 13)
                //std::cout << "King of ";
            //if (m_Suit == 1)
                //std::cout << "Spades\n";
            //if (m_Suit == 2)
                //std::cout << "Hearts\n";
            //if (m_Suit == 3)
                //std::cout << "Diamonds\n";
            //if (m_Suit == 4)
                //std::cout << "Clubs\n";
    }
}
