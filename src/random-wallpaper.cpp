#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	//random number each time the program runs
//intro
cout<<"Default wallpaper directory: ~/wallpapers"<<endl<<"Change directory if something else."<<endl<<"list the wallpaper names for random wallpapers. NOTE: will be automatic in the future"<<endl<<endl;
cout<<"██╗    ██╗ █████╗ ██╗     ██╗     ██████╗  █████╗ ██████╗ ███████╗██████╗"<<endl;
cout<<"██║    ██║██╔══██╗██║     ██║     ██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔══██╗"<<endl;
cout<<"██║ █╗ ██║███████║██║     ██║     ██████╔╝███████║██████╔╝█████╗  ██████╔╝"<<endl;
cout<<"██║███╗██║██╔══██║██║     ██║     ██╔═══╝ ██╔══██║██╔═══╝ ██╔══╝  ██╔══██╗"<<endl;
cout<<"╚███╔███╔╝██║  ██║███████╗███████╗██║     ██║  ██║██║     ███████╗██║  ██║"<<endl;
cout<<" ╚══╝╚══╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝     ╚═╝  ╚═╝╚═╝     ╚══════╝╚═╝  ╚═╝"<<endl<<endl<<endl;
cout<<"1. Choose a wallpaper"<<endl;
cout<<"2. Random wallpaper"<<endl;
string choice;
cin>>choice;
srand(time(0));
	int randRange = 14; // 0 to randRange
	int randNum = (rand() % randRange) + 1;
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
		system("swww img ~/wallpapers/BSD1"); //wallpaper output
	}
	else if (randNum == 7) {
		system("swww img ~/wallpapers/BSD2"); //wallpaper output
	}
	else if (randNum == 8) {
		system("swww img ~/wallpapers/BSD3"); //wallpaper output
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
	cout<<"Changing To A Random Wallpaper..."<<endl;
	cout<<"Exitting..."<<endl<<endl;
}
}
