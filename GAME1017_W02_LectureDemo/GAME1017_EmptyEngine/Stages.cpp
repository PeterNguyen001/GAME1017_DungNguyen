#include "Stages.h"
#include "Engine.h"
using namespace std;
void Stages::Render()
{
	SDL_RenderPresent(Engine::Instance().m_pRenderer);
}

void Stages::Resume()
{
}

TitleStage::TitleStage(){}


void TitleStage::Enter()
{
	cout << "Entering TitleStage" << endl;
}

void TitleStage::Update()
{
}

void TitleStage::Render()
{
	cout << "Rendering TitleStage" << endl;
	SDL_SetRenderDrawColor(Engine::Instance().m_pRenderer);
	Stages::Render();
}

void TitleStage::Exit()
{
}
