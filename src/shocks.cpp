#include	<SFML/Graphics.hpp>
#include	"Particle.hpp"

int main()
{
	Particle dot( 10.0, 1.0 );	
	
	
	sf::RenderWindow window(	sf::VideoMode(720, 480), "Particle shocks");
	dot.shape.setFillColor(	sf::Color::Green	);

	while	(window.isOpen())
	{
		sf::Event event;
		while	(window.pollEvent	(event)	)
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseButtonPressed)
			{
				dot.updatePos( event.mouseButton.x, event.mouseButton.y );
			}
		}

		window.clear();
		window.draw(dot.shape);
		window.display();
	}

	return 0;
}
