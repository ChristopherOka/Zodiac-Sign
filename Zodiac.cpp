#include <iostream>
#include <string>

int main() {
	std::string month;
	int day;
	std::string sign;
	std::cout << "What is your birth month?\n";
	std::cin >> month;
	std::cout << "What is your birth day?\n";
	std::cin >> day;

	if (month == "August" || month == "august") {
		if (day <= 22) {
			std::cout << "You are a Leo!\n";
			sign = "leo";
		}
		if (day > 22)
		{
			std::cout << "You are a Virgo!\n";
			sign = "virgo";
		}
	}
	if (month == "April" || month == "april") {
		if (day <= 19) {
			std::cout << "You are an Aries!\n";
			sign = "aries";
		}
		if (day > 19) {
			std::cout << "You are a Tauros!\n";
			sign = "tauros";
		}
	}
	if (month == "December" || month == "december") {
		if (day <= 21) {
			std::cout << "You are a Sagittarius!\n";
			sign = "sagittarius";
		}
		if (day > 21) {
			std::cout << "You are a Capricorn!\n";
			sign = "capricorn";
		}
	}
	if (month == "February" || month == "february") {
		if (day <= 18) {
			std::cout << "You are an Aquarius!\n";
			sign = "aquarius";
		}
		if (day > 18) {
			std::cout << "You are a Pisces!\n";
			sign = "pisces";
		}
	}
	if (month == "January" || month == "january") {
		if (day <= 19) {
			std::cout << "You are a Capricorn!\n";
			sign = "capricorn";
		}
		if (day > 19) {
			std::cout << "You are an Aquarius!\n";
			sign = "aquarius";
		}
	}
	if (month == "July" || month == "july") {
		if (day <= 22) {
			std::cout << "You are a Cancer!\n";
			sign = "cancer";
		}
		if (day > 22) {
			std::cout << "You are a Leo!\n";
			sign = "leo";
		}
	}
	if (month == "June" || month == "june") {
		if (day <= 20) {
			std::cout << "You are a Gemini!\n";
			sign = "gemini";
		}
		if (day > 20) {
			std::cout << "You are a Cancer!\n";
			sign = "cancer";
		}
	}
	if (month == "March" || month == "march") {
		if (day <= 20) {
			std::cout << "You are a Pisces!\n";
			sign = "pisces";
		}
		if (day > 20) {
			std::cout << "You are an Aries!\n";
			sign = "aries";
		}
	}
	if (month == "May" || month == "may") {
		if (day <= 20) {
			std::cout << "You are a Tauros!\n";
			sign = "tauros";
		}
		if (day > 20) {
			std::cout << "You are a Gemini!\n";
			sign = "gemini";
		}
	}
	if (month == "November" || month == "november") {
		if (day <= 21) {
			std::cout << "You are a Scorpio!\n";
			sign = "scorpio";
		}
		if (day > 21) {
			std::cout << "You are a Sagittarius!\n";
			sign = "sagittarius";
		}
	}
	if (month == "October" || month == "october") {
		if (day <= 22) {
			std::cout << "You are a Libra!\n";
			sign = "libra";
		}
		if (day > 22) {
			std::cout << "You are a Scorpio!\n";
			sign = "scorpio";
		}
	}
	if (month == "September" || month == "september") {
		if (day <= 22) {
			std::cout << "You are a Virgo!\n";
			sign = "scorpio";
		}
		if (day > 22) {
			std::cout << "You are a Libra!\n";
			sign = "libra";
		}
	}
	if (sign == "cancer" || sign == "scorpio" || sign == "pisces") {
		std::cout << "You are also a Water sign!\n";
	}
	if (sign == "aries" || sign == "leo" || sign == "sagittarius") {
		std::cout << "You are also a Fire sign!\n";
	}
	if (sign == "tauros" || sign == "virgo" || sign == "capricorn") {
		std::cout << "You are also an Earth sign!\n";
	}
	if (sign == "gemini" || sign == "libra" || sign == "aquarius") {
		std::cout << "You are also an Air sign!\n";
	}
	std::cout << std::endl;
}