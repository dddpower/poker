#include <iostream>
#include <vector>
#include <unordered_set>
#include <random>
#include <string>
#include <boost/lexical_cast.hpp>

using boost::lexical_cast;
using boost::bad_lexical_cast;

constexpr size_t DECK_SIZE = 52;
constexpr size_t ACE = 1, JACK = 11, QUEEN = 12, KING = 13;
enum Suit {SPADE, CLUB, HEART, DIAMOND, JOKER};
using card = std::pair<Suit, size_t>;
using card_stack = std::vector<card>;
std::string to_string(const card& c) {
  return "";
}
card_stack shuffle(card_stack& d) {
  auto card_stack_size{d.size()};
  std::unordered_set<size_t> to_visit{};
  for (size_t i = 0; i < card_stack_size; ++i) {
    to_visit.insert(i);
  }
  std::mt19937 gen(std::random_device);
  std::uniform_int_distribution<int> dis(0, card_stack_size - 1);
  while(!to_visit.empty()) {
    int i{dis(gen)};
    int j{dis(gen)};
    swap(d[i], d[j]);
    to_visit.erase(i);
    to_visit.erase(j);
  };
  return d;
}
card_stack initial_card_stack() {
  card_stack d;
  for (size_t i = SPADE; i <= DIAMOND; ++i) {
    for (auto j = ACE; j <= KING; ++j) {
      d.emplace_back(card{static_cast<Suit>(i), j});
    }
  }
  // For jocker, true means colored, false means uncolored.
  d.emplace_back(card{JOKER, true});
  return d;
}
enum hand_category {
  HIGH_CARD, ONE_PAIR, TWO_PAIRS, THREE_OF_A_KIND, STRAIGHT,
  FULL_HOUSE, FOUR_CARD, STAIGHT_FLUSH
};
class poker {
  card_stack field, hand1, hand2;
};
int main() {
  // auto result = lexical_cast<std::string>(std::make_pair(1, 2));
  // std::cout << result << std::endl;
}
