#pragma once
#ifndef _Animation_H_
#define _Animation_H_
#include<map>
#include"Global.h"
#include"Sprite.h"

using namespace std;

class  Animation
{
public:
	map<Global::Status, Sprite*> ListSprite; //danh sach trang thai cua no

public:
	Animation();
	virtual ~Animation();

	void SetFrame(Global::Status status, int index);
	int GetCurrentFrame(Global::Status status);
	virtual void LoadResource() {};

	virtual void Update(Global::Status status) {};
	virtual void Render(Global::Direction direction,
		Global::Status status,
		D3DXVECTOR3 position,
		D3DXVECTOR3 scale = D3DXVECTOR3(1,1,0),
		D3DXVECTOR3 translation = D3DXVECTOR3(0, 0, 0),
		float		rotation =0,
		D3DXVECTOR3 rotationCenter = D3DXVECTOR3());

	void NextFrame(Global::Status status);
	void UpdateDirection(Global::Status status, Global::Direction direction);
};


#endif // !_Animation_H_