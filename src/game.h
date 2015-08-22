#ifndef H_GAME
#define H_GAME

#include <vector>
#include <string>
#include <dirent.h>
#include <math.h>

#include <SFML/Graphics.hpp>

//#include "depend/dirent.h"

#include "engine/world.h"
#include "engine/spriteentity.h"
#include "engine/zui/window.h"
#include "engine/zui/textbutton.h"
#include "engine/zui/imglist.h"
#include "engine/mouseeventhandler.h"
#include "engine/line.h"
#include "engine/vec2f.h"
#include "engine/physicsentity.h"
#include "engine/ground.h"
#include "player.h"

class Game
{
public:
    void setup();
    void loop();
    void cleanup();
    
    bool isDone();

private:
    bool done;

    sf::RenderWindow* window;

    World world;

    zui::Window mainUIWindow;
    MouseEventHandler mouseHandler;
    sf::View uiView;
    sf::View worldView;


    sf::Clock gameClock;
    sf::Time frameTime;
    sf::Time lastFrame;


    Player* player;

    void generateMap();
};

#endif
