#include "utility.hpp"

std::pair<int, int> positionExtraction(std::string input){
  std::pair<int, int> pair;
  char ch = input[0], nm = input[1];
  ch -= 49;
  std::string str1, str2;
  str1 += ch;
  str2 += nm;
  pair.first = std::stoi(str1);
  pair.second = (8 - std::stoi(str2));

  return pair;
}


std::string pieceNameByPosition(std::map< std::string, std::string> map, std::string position){
	for( auto it = map.cbegin(); it != map.cend(); it++){
    if((*it).second == position){
      return (*it).first;
		}
	}
	return "";
}

std::string generateLocationOfChessBoard( int x, int y){
	x += 97; // Convert to ascii code characters {a, b, c, d, e, f, g, h}
	y += 1;
	char a = x;
	std::string result;
	result += a;
	result += std::to_string( y);

	return result;
}

std::string convertMoveCode( std::string input){
	char x = input[1];
	std::string temp;
	temp += x;
	int number = std::stoi(temp);
	number -= 9;
	number *= -1;
	std::string result;
	result += input[0];
	result += std::to_string(number);

	return result;
}
