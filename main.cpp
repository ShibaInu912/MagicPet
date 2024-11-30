#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

class Player
{
protected:
  string name;
  vector<MagicPet> magicPets;
public:
	Player();
  Player(string playerName);
  MagicPet& getMagicPet(string petName);
  void addMagicPet(MagicPet& newPet);
// �ϥ� vector�A�]�����μg destructor
};

Player::Player() : name("") {};
Player::Player(string playerName) : name(playerName) {}

MagicPet& Player::getMagicPet(string petName)
{
  for(int i = 0; i < this -> magicPets.size(); i++)
  {
    if(this -> magicPets[i].getPetName() == petName) 
    // getPetName() �n���t�~�@�չ�@ class MagicPet 
    {
      return &(this -> magicPets[i]);
    }
  };
return nullptr;  // �b�����p�U�n�Ϫ��a���s��J
}

void Player::addMagicPet(MagicPet& newPet)
{
	magicPets.push_back(newPet);
}


class BattleSystem
{
protected:
  vector<MagicPet> teamPlayer;
  vector<MagicPet> teamComputer;
  int roundCnt;
  int idx;
public:
	BattleSystem();
};



int main()
{
  return 0;
}