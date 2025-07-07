#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	//range of random numbers (1 to randRange)
	int randRange = 14;
	bool loop = true;
  string choice;
  string fileName;
  string fullCommand;
//intro
cout<<"Default wallpaper directory: ~/wallpapers"<<endl<<"Change directory if something else."<<endl<<"list the wallpaper names for random wallpapers. NOTE: will be automatic in the future"<<endl<<endl;
do {

//random every time
srand(time(0));
int randNum = (rand() % randRange) + 1;

cout<<"██╗    ██╗ █████╗ ██╗     ██╗     ██████╗  █████╗ ██████╗ ███████╗██████╗"<<endl;
cout<<"██║    ██║██╔══██╗██║     ██║     ██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔══██╗"<<endl;
cout<<"██║ █╗ ██║███████║██║     ██║     ██████╔╝███████║██████╔╝█████╗  ██████╔╝"<<endl;
cout<<"██║███╗██║██╔══██║██║     ██║     ██╔═══╝ ██╔══██║██╔═══╝ ██╔══╝  ██╔══██╗"<<endl;
cout<<"╚███╔███╔╝██║  ██║███████╗███████╗██║     ██║  ██║██║     ███████╗██║  ██║"<<endl;
cout<<" ╚══╝╚══╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝     ╚═╝  ╚═╝╚═╝     ╚══════╝╚═╝  ╚═╝"<<endl<<endl<<endl;
cout<<"1. Choose a wallpaper"<<endl;
cout<<"2. Random wallpaper"<<endl;
cout<<"3. Exit"<<endl;
cin>>choice;


if (choice == "Random" || choice == "random" || choice == "random wallpaper" || choice == "Random wallpaper" || choice == "Random Wallpaper" || choice == "2") {
	
	if (randNum == 1) {
		system("swww img ~/wallpapers/astronaut.jpg"); //wallpaper output
	}
	else if (randNum == 2) {
		system("swww img ~/wallpapers/sky.jpg"); //wallpaper output
	}
	else if (randNum == 3) {
		system("swww img ~/wallpapers/cat.jpg"); //wallpaper output
	}
	else if (randNum == 4) {
		system("swww img ~/wallpapers/city.jpg"); //wallpaper output
	}
	else if (randNum == 5) {
		system("swww img ~/wallpapers/forestBlueWallpaper.jpg"); //wallpaper output
	}
	else if (randNum == 6) {
		system("swww img ~/wallpapers/BSD1.jpg"); //wallpaper output
	}
	else if (randNum == 7) {
		system("swww img ~/wallpapers/BSD2.jpg"); //wallpaper output
	}
	else if (randNum == 8) {
		system("swww img ~/wallpapers/BSD3.jpg"); //wallpaper output
	}
	else if (randNum == 9) {
		system("swww img ~/wallpapers/hong-kong-night.jpg"); //wallpaper output
	}
	else if (randNum == 10) {
		system("swww img ~/wallpapers/japan.jpg"); //wallpaper output
	}
	else if (randNum == 11) {
		system("swww img ~/wallpapers/nightSky.jpg"); //wallpaper output
	}
	else if (randNum == 12) {
		system("swww img ~/wallpapers/purpleCity.jpg"); //wallpaper output
	}
	else if (randNum == 13) {
		system("swww img ~/wallpapers/purpleSky.jpg"); //wallpaper output
	}
	else if (randNum == 14) {
		system("swww img ~/wallpapers/samuraiDragon.jpg"); //wallpaper output
	}
	cout<<"Changing To A Random Wallpaper..."<<endl<<endl;
	
}
else if (choice == "Exit" || choice == "exit" || choice == "e" || choice == "3") {
	  loop = false;
	}
else if (choice == "choose" || choice == "choose a wallpaper" || choice == "c" || choice == "1") {
  system("ls ~/wallpapers/"); //list all files (and wallpapers)
  cout<<endl<<"Enter the name of the file: ";
  cin>>fileName;
  fullCommand = "swww img ~/wallpapers/" + fileName; 
  system(fullCommand.c_str());
}
} while (loop);
cout<<"███████╗██╗  ██╗██╗████████╗████████╗██╗███╗   ██╗ ██████╗"<<endl;
cout<<"██╔════╝╚██╗██╔╝██║╚══██╔══╝╚══██╔══╝██║████╗  ██║██╔════╝"<<endl;
cout<<"█████╗   ╚███╔╝ ██║   ██║      ██║   ██║██╔██╗ ██║██║  ███╗"<<endl;
cout<<"██╔══╝   ██╔██╗ ██║   ██║      ██║   ██║██║╚██╗██║██║   ██║"<<endl;
cout<<"███████╗██╔╝ ██╗██║   ██║      ██║   ██║██║ ╚████║╚██████╔╝██╗██╗██╗"<<endl;
cout<<"╚══════╝╚═╝  ╚═╝╚═╝   ╚═╝      ╚═╝   ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝╚═╝╚═╝"<<endl;
cout<<endl<<endl<<endl;
}
