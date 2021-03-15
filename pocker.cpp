#include <iostream>
#include <array>

constexpr size_t DECK_SIZE = 52;
constexpr int ACE = 1, JACK = 11, QUEEN = 12, KING = 13;
enum Suit {SPADE, CLUB, HEART, DIAMOND};
using card = std::pair<Suit, int>;
using deck = std::array<card, DECK_SIZE>;

class poker {
  deck deck;
};
int main() {

}
