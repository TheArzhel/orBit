#ifndef __j1Player_H__
#define __j1Player_H__

#include "j1Module.h"
#include "p2Point.h"

struct SDL_Texture;
struct Collider;

class j1Player :public j1Module
{
public:

	j1Player();
	~j1Player();

	bool Start();
	bool Update();
	bool PostUpdate();

	void OnCollision(Collider* c1, Collider* c2);

	bool Load(pugi::xml_node&);
	bool Save(pugi::xml_node&) const;

public:

	SDL_Texture* graphics = nullptr;
	Collider* playercollider = nullptr;
	iPoint playerpos;

};

#endif // __j1Player_H__