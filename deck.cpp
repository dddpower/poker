#include <iostream>
using namespace std;
typedef enum {SPADE, HEART, DIAMOND, CLUB, JOCKER} Suit;
typedef enum {ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE,
              TEN, JACK, QUEEN, KING} Counter;
struct card {
    Suit suit;
    Counter counter;
};
struct deck {
    size_t deck_size const = 
}
int main() {

}