#include "Pipe.h"

Pipe::Pipe(std::shared_ptr<Models>& model, std::shared_ptr<Shaders>& shader, std::shared_ptr<Texture>& texture)
	:Sprite2D(model, shader, texture)
{
	m_speed = 100.0;
	m_active = true;
	m_SizeCollider = 50;
}

Pipe::~Pipe()
{
}

void Pipe::Update(GLfloat deltatime)
{
	if (!m_active)
		return;
	Vector2 pos = Get2DPosition();
	pos.x = pos.x - m_speed * deltatime;
	Set2DPosition(pos);

	if (pos.x <= -100 || pos.x > 800)
		m_active = false;
}

bool Pipe::IsActive() 
{
	return m_active;
}

void Pipe::SetActive(bool status)
{
	m_active = status;
}

void Pipe::SetColliderSize(float size)
{
	m_SizeCollider = size;
}
float Pipe::GetColliderSize()
{
	return m_SizeCollider;
}

void Pipe::SetPosY(int pos) 
{
	m_PosY = pos;
}

int Pipe::GetPosY()
{
	return m_PosY;
}