#include <iostream>
#include <cctype>
#include "MovieHandler.h"

using namespace std;

void info();
void help();
bool checkForArgs(string s);
string to_lowercase(string s);
int main()
{

	string arg = "null";
	string movie = "null";
	string cmd = "null";
	string mInfo = "null";

	info();
	help();

	MovieHandler mh;

	while(arg != "quit")
	{
		getline(cin, arg);
		arg = to_lowercase(arg);
		bool hasArg = checkForArgs(arg);
		
		cmd = (hasArg) ? arg.substr(0, arg.find_first_of(' ')) : arg;
		
		if(cmd == "find")
		{
			std::cout << "--- Movie List: FIND ---" << std::endl;
			movie = arg.substr(arg.find_first_of(' ') + 1);
			if(movie == "find"){
				std::cout << "Please add movie title after argument" << std::endl;
			}
			else{
				mInfo = mh.getURL(movie, true);
				std::cout << mInfo << std::endl;
				mh.updateCache(movie, mh.getURL(movie, false), "FIND");
			}
		}
		else if(cmd == "add")
		{
			movie = arg.substr(arg.find_first_of(' ') + 1);
			if(movie == "add"){
				std::cout << "Please add movie title after argument" << std::endl;
			}
			else{
				mh.addMovie(movie);
				mh.updateCache(movie, mh.getURL(movie, false), "ADD");
			}
		}
		else if(cmd == "remove")
		{
			movie = arg.substr(arg.find_first_of(' ') + 1);
			if(movie == "remove"){
				std::cout << "Please add movie title after argument" << std::endl;
			}
			else{
				mh.removeMovie(movie);
				mh.updateCache(movie, mh.getURL(movie, false), "REMOVE");
			}
		}
		else if(cmd == "history")
		{
			std::cout << "--- Movie List: HISTORY ---" << std::endl;
			std::cout << "Here's your most recent search information" << std::endl;
			std::cout << "Action: " << mh.getCacheAttribute(MovieHandler::ACTION) << std::endl;
			std::cout << "Movie: " << mh.getCacheAttribute(MovieHandler::MOVIE) << std::endl;
			std::cout << "URL: " << mh.getCacheAttribute(MovieHandler::URL) << std::endl; 
		}
		else if(cmd == "print")
			mh.print();
		else if(cmd == "help")
			help();
		else if(cmd == "info")
			info();
		else if(cmd == "watched")
			mh.pop();
	}
	
	return 0;
}
string to_lowercase(string s)
{
	for(unsigned int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	
	return s;
}
bool checkForArgs(string s)
{
	for(unsigned int i = 0; i < s.size(); i++)
		if(s[i] == ' ')
			return true;
	return false;
}

void info()
{
	cout << "--- Movie List Info ---" << endl;
	cout << "Welcome to Movie List! This is a useful tool to help" << endl;
	cout << "organize a small list of movie for you /and/ your" << endl;
	cout << "significant other can watch! This program will provide you" << endl;
	cout << "with a list of 10 movies to have you watch in order!" << endl;
	cout << endl;
}

void help()
{
	cout << "--- Movie List Commands ---" << endl;
	cout << "Find <movie title> - finds a movie and gives you information about it!" << endl;
	cout << "Add <movie title> - Adds a movie to your list!" << endl;
	cout << "Remove <movie title> - Removes a movie from your list." << endl;
	cout << "Watched - Takes the first movie in your list and removes it from the list" << endl;
	cout << "History - Peeks at your most recent action" << endl;
	cout << "Print - Will print your current list of movies" << endl;
	cout << "Help - Displays this help menu" << endl;
	cout << "Info - Prints the information about this program" << endl;
	cout << "Quit - Quits the program, don't worry your list will be saved" << endl;
	cout << endl;
}
