#pragma once
//�ΰ��ӿ��� �۵��ϰ� ���ο��� ������ ���� ��ü�帧�Դϴ� �ΰ��Ӿ�
class InGameScene : public Scene
{
	//�����̺� �Լ�����
private:
	Camera* cam1;
	Grid* grid;


	//�ۺ� �Լ�����
public:
	InGameScene();
	~InGameScene();
	//�ʱ�ȭ
	virtual void Init() ;
	//����
	virtual void Release() ;
	//Loop
	virtual void Update();
	virtual void LateUpdate();
	virtual void PreRender();
	virtual void Render();
	//Window Resize
	virtual void ResizeScreen();

	//�����̺� ��������
private:


	//�ۺ� ��������
public:

};

