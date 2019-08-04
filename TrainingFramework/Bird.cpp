#include "Bird.h"

Bird::Bird(std::shared_ptr<Models>& model, std::shared_ptr<Shaders>& shader, std::shared_ptr<Texture>& texture)
	:Sprite2D(model, shader, texture)
{
	m_speed = 50;
	m_allive = true;
	m_SizeCollider = 50;
}

Bird::~Bird()
{
}

void Bird::Update(GLfloat deltatime)
{
	if (!m_allive)
		return;
	Vector2 pos = Get2DPosition();
	pos.y = pos.y + m_speed * deltatime;
	Set2DPosition(pos);
}

bool Bird::IsAlive()
{
	return m_allive;
}

void Bird::SetIsAlive(bool status)
{
	m_allive = status;
}

void Bird::SetColliderSize(float size)
{
	m_SizeCollider = size;
}
float Bird::GetColliderSize()
{
	return m_SizeCollider;
}

void Bird::SetPosY(int pos)
{
	m_PosY = pos;
}

int Bird::GetPosY()
{
	return m_PosY;
}

void Bird::Fly(float jump) 
{
	Vector2 pos = Get2DPosition();
	pos.y = pos.y - m_speed * jump;
	Set2DPosition(pos);
}