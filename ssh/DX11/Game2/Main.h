#pragma once



class Main : public Scene
{
private:
	ObImage * sonic;
	Player * pl;

public:
	virtual void Init() override;
	virtual void Release() override; //����
	virtual void Update() override;
	virtual void LateUpdate() override;//����
	virtual void Render() override;
	virtual void ResizeScreen() override;
};
