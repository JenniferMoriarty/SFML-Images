#include<iostream>
#include "SFML/Graphics.hpp"
using namespace std;
int main() {
	//game set up (you'll need these lines in every game)
	sf::RenderWindow screen(sf::VideoMode(800, 800), "SFML scaling"); //set up screen
	sf::Event event; //set up event queue
	sf::Clock clock; //set up the clock (needed for game timing)
	const float FPS = 60.0f; //FPS
	screen.setFramerateLimit(FPS); //set FPS

	//load in images
	sf::Texture link;
	link.loadFromFile("image.png");
	sf::Sprite LinkPic;
	LinkPic.setTexture(link);
	//you can add scaling stuff here


	//################### HOLD ONTO YOUR BUTTS, ITS THE GAME LOOP###############################################################
	while (screen.isOpen()) {//keep window open until user shuts it down

		while (screen.pollEvent(event)) { //look for events-----------------------

			//this checks if the user has clicked the little "x" button in the top right corner
			if (event.type == sf::Event::EventType::Closed)
				screen.close();

		}//end event loop---------------------------------------------------------------

		//physics section---------------------------------------------------------------
		
		//you can add rotation stuff here

		//render section-----------------------------------------
		screen.clear(); //wipes screen, without this things smear
	
		screen.draw(LinkPic);

		screen.display(); //flips memory drawings onto screen

	}//######################## end game loop ###################################################################################

	cout << "goodbye!" << endl;
} //end of main
