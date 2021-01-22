#pragma once
#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <iostream>
#include <map>
#include <string>
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_mixer.h"
#define FPS 60
#define WIDTH 1024
#define HEIGHT 768
using namespace std;

class Engine
{
private: // private properties.
	bool m_running = false;
	Uint32 m_start, m_end, m_delta, m_fps;
	const Uint8* m_keystates;
	SDL_Window* m_pWindow;
	SDL_Renderer* m_pRenderer;

private: // private method prototypes.
	Engine() {} // Prevents instantiation outside class.
	int Init(const char* title, int xPos, int yPos, int width, int height, int flags);
	void Clean();
	void Wake();
	void HandleEvents();
	bool KeyDown(SDL_Scancode c);
	void Update();
	void Render();
	void Sleep();
	friend class Stages;
public: // public method prototypes.
	int Run();
	//static Engine* Instance(); // Pointer way.
	static Engine& Instance(); // Static method for object access.
//	SDL_Renderer* GetRender() { return m_pRenderer; }
};

#endif

// Reminder: you can ONLY have declarations in headers, not logical code
