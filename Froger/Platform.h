#pragma once
#include "SDL.h"
#include "Image.h"
#include "Carrusel.h"
#include <vector>
class Platform
{
private:
	SDL_Renderer* render;
	SDL_Window* window;
	int width;
	int height;
	Platform();

	static Platform* ptr;
	Image imagen1;
	std::vector<Carrusel*> carrusels;
public:
	static Platform* getPtr();
	void init(int w, int h);
	void update();
	void draw();
	void input();
	int getWidth();
	int getHeight();
	void setWidth(int w);
	void setHeight(int h);
	SDL_Renderer* getRender();
};

