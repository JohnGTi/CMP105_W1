#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(100, 100));
	rect.setPosition(250, 250);
	rect.setFillColor(sf::Color::Red);

	rectDos.setSize(sf::Vector2f(50, 50));
	rectDos.setPosition(275, 275);
	rectDos.setFillColor(sf::Color::Green);

	theThirdRectangleThatImmaDoing.setSize(sf::Vector2f(25, 25));
	theThirdRectangleThatImmaDoing.setPosition(287, 287);
	theThirdRectangleThatImmaDoing.setFillColor(sf::Color::Blue);

	/*circle.setRadius(50);
	circle.setPosition(300, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setRadius(2.f);*/

	NEWrectangleBiggerAndBetterThanEverB4.setSize(sf::Vector2f(25, 10));
	//NEWrectangleBiggerAndBetterThanEverB4.setPosition(550, 550);
	NEWrectangleBiggerAndBetterThanEverB4.setFillColor(sf::Color::Green);

	// Render text
	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error Loading Font\n";
	}

	text.setFont(font);
	text.setString("Hello Boys.");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	//text.setStyle(sf::Text::Bold);
	text.setPosition(240, 10);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	NEWrectangleBiggerAndBetterThanEverB4.setPosition(pos.x - 50, pos.y - 25);
}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(circle);
	window->draw(rect);
	window->draw(rectDos);
	window->draw(theThirdRectangleThatImmaDoing);

	window->draw(NEWrectangleBiggerAndBetterThanEverB4);
	window->draw(text);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}