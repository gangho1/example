#pragma once
//���ӽ����� �ɼǼ��ù� ���ӽ��� ���� �� ����� ���Դϴ�
class LobbyScene : public Scene
{
//�����̺� �Լ���������
private:

//�ۺ� �Լ���������
public:
	LobbyScene();
	~LobbyScene();
	//�ʱ�ȭ
	virtual void Init();
	//����
	virtual void Release();
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

