#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

int main()
{   
    //TODO: Criar código genérico para criação de janela em um arquivo separado
    sf::Window window;
   
    window.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width*0.75, sf::VideoMode::getDesktopMode().height*0.75), "Ogstan");
    window.setVerticalSyncEnabled(true);
    window.setPosition(sf::Vector2i(sf::VideoMode::getDesktopMode().width*0.15, sf::VideoMode::getDesktopMode().height*0.10));
    


    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return EXIT_SUCCESS;
}