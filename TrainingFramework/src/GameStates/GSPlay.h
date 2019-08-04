#pragma once
#include "gamestatebase.h"
#include "GameButton.h"
#include "../../Pipe.h"
#include "../../Bird.h"

class Sprite2D;
class Sprite3D;
class Text;

class GSPlay :
	public GameStateBase
{
public:
	GSPlay();
	~GSPlay();

	void Init();
	void Exit();

	void Pause();
	void Resume();

	void HandleEvents();
	void HandleKeyEvents(int key, bool bIsPressed);

	void HandleTouchEvents(int x, int y, bool bIsPressed);
	void Update(float deltaTime);
	void Draw();

	
	void CreatRandomPipeUp(int x);
	void CreatRandomPipeDown(int x);

private:

	float m_SpawnCooldown;

	std::shared_ptr<Sprite2D> m_BackGround;
	std::shared_ptr<Sprite2D> m_Land;

	std::shared_ptr<Sprite2D> m_Pipe1;
	std::shared_ptr<Sprite2D> m_Pipe2;
	
	std::list<std::shared_ptr<Pipe>> m_listPipeUp;
	std::list<std::shared_ptr<Pipe>> m_listPipeDown;
	std::shared_ptr<Bird> m_Bird;
	std::shared_ptr<Text>  m_score;

};

