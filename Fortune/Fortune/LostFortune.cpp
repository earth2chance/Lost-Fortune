#include <iostream>
#include <string>

int main()
{
	const int GOLD_PIECES = 900;
	int adventure, killed, survivors, years;
	std::string leader, boat;

	//getting their info
	std::cout << "Welcome to Lost Fortune" << std::endl;
	std::cout << "Please enter the following for your personalized adventure" << std::endl;

	std::cout << "Enter the number of Adventureres in your party: ";
	std::cin >> adventure;

	std::cout << "Enter a number , smaller than the first: ";
	std::cin >> killed;

	survivors = adventure - killed;
	years = adventure + killed;

	std::cout << "Enter your last name: ";
	std::cin >> leader;

	std::cout << "Enter a noun: ";
	std::cin >> boat;

	//the story
	std::cout << "\nA brave group of " << adventure << " set out on a quest, " << std::endl;
	std::cout << "in search of the lost treasure of the Ancient Farts. " << std::endl;
	std::cout << "The group was led by the legendary crossdresser, " << leader << std::endl;

	std::cout << "\nAlong the way, a band of marauding teenagers ambushed the party. " << std::endl;
	std::cout << "All fought bravely under the command of " << leader << "." << std::endl;
	std::cout << "The teenagers were defeated, but at a cost. " << std::endl;
	std::cout << "Of the adventurers, " << killed << " were vanquished, " << std::endl;

	std::cout << "leaving just " << survivors << " in the group. \n" << std::endl;
	std::cout << "\nThe party was about to give up all hope. " << std::endl;
	std::cout << "But while laying the deceased to rest, " << std::endl;
	std::cout << "they stumbled upon the buried fortune. " << std::endl;
	std::cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. " << std::endl;
	std::cout << leader << " held on to the extra " << (GOLD_PIECES % survivors) << std::endl;
	std::cout << "pieces to keep things fair of course.\n";
	std::cout << "The leader " << leader << " left on the great boat " << boat << std::endl;
	std::cout << "And was not seen for " << years << " years." << std::endl;

}