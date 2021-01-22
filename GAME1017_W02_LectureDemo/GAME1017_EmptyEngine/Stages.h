#pragma once
#ifndef _STAGES_H_
#define _STAGES_H_
class Stages
{
public:
	virtual void Enter() = 0;// = pure virtual - must be define in subclass
	virtual void Update() = 0;
	virtual void Render();
	virtual void Exit() = 0;
	virtual void Resume();
	virtual ~Stages() = default;
protected:
	Stages() {}
};

class TitleStage : public Stages
{
public:
	TitleStage();
	virtual void Enter();
	virtual void Update();
	virtual void Render();
	virtual void Exit();
};
#endif
