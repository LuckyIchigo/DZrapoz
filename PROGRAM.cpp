#include <iostream>
#include <string>
using namespace std;
class SeasonsBase {
public:
	virtual ~SeasonsBase() = default;
	virtual std::string Change() = 0;
};
class Seasons : public SeasonsBase { //  ласс Seasons
private:
	enum Season { // ѕеречисление времЄн года
		WINTER,
		SPRING,
		SUMMER,
		AUTUMN,
	};
	Season current_season_ = Season::WINTER;
public:
	Season S = WINTER;
	string Change() override { // ћетод, измен€ющий времена года
		switch (current_season_) {
		case Season::SPRING:
			current_season_ = Season::SUMMER;
			return "Spring -> Summer";
		case Season::SUMMER:
			current_season_ = Season::AUTUMN;
			return "Summer -> Autumn";
		case Season::AUTUMN:
			current_season_ = Season::WINTER;
			return "Autumn -> Winter";
		case Season::WINTER:
			current_season_ = Season::SPRING;
			return "Winter -> Spring";
		default:
			return "Invalid season";
		}
	}
};
class ReverseSeason : public SeasonsBase { //  ласс-наследник
private:
	enum Seasonenum { // ѕеречисление времЄн года
		WINTER,
		SPRING,
		SUMMER,
		AUTUMN,
	};
