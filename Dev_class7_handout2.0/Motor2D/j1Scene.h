#ifndef __j1SCENE_H__
#define __j1SCENE_H__

#include "j1Module.h"

struct SDL_Texture;
class Collider;

class j1Scene : public j1Module
{
public:

	j1Scene();

	// Destructor
	virtual ~j1Scene();

	// Called before render is available
	bool Awake(pugi::xml_node& config);

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	bool change_scene(const char* map_name);

public:
	Collider* colliderfloor = nullptr;
	Collider* colliderbox = nullptr;
	Collider* test = nullptr;
	p2List<p2SString*> StageList;
	p2SString FirstStage;
	bool firstStage = true;
	bool secondStage = false;

private:
	p2SString map_name;
};

#endif // __j1SCENE_H__