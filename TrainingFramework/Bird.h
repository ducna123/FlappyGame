#pragma once

#include "Sprite2D.h"
#include "Application.h"

class  Bird : public Sprite2D
{
public:
	Bird(std::shared_ptr<Models>& model, std::shared_ptr<Shaders>& shader, std::shared_ptr<Texture>& texture);
	~Bird();


	void		Update(GLfloat deltatime) override;
	void        Fly(float jump);

	bool		IsAlive();
	void		SetIsAlive(bool status);

	void		SetColliderSize(float size);
	float		GetColliderSize();

	void		SetPosY(int pos);
	int		    GetPosY();

private:
	bool	m_allive;
	float	m_SizeCollider;
	float   m_PosY;
	float   m_speed;
};