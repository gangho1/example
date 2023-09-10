#include "stdafx.h"
#include "InGameScene.h"

InGameScene::InGameScene()
{
    grid = Grid::Create();

    cam1 = Camera::Create();
    cam1->LoadFile("Cam.xml");
    Camera::main = cam1;

    cam1->viewport.x = 0.0f;
    cam1->viewport.y = 0.0f;
    cam1->viewport.width = App.GetWidth();
    cam1->viewport.height = App.GetHeight();
    cam1->width = App.GetWidth();
    cam1->height = App.GetHeight();
}

InGameScene::~InGameScene()
{

}

void InGameScene::Init()
{

}

void InGameScene::Release()
{

}

void InGameScene::Update()
{
    //���� ī�޶� ��Ʈ��
    Camera::ControlMainCam();

    //gui �������� ��ġ ũ�� ���
    ImGui::Begin("Hierarchy");
    grid->RenderHierarchy();
    cam1->RenderHierarchy();
    ImGui::End();

    //��� ī�޶� ������Ʈ
    grid->Update();
    cam1->Update();
}

void InGameScene::LateUpdate()
{
    //���콺 ��ġ�� UI Ŀ�� �̵���Ű�� �����Դϴ� EX ) �ѱ⿡��
    Ray Up;
    Up = Utility::MouseToRay();
    Vector3 ndcMouse = Utility::MouseToNDC();
    //target->SetWorldPos(ndcMouse);
}

void InGameScene::PreRender()
{

}

void InGameScene::Render()
{
    //��ü�� ���� ����ּ��� 
    cam1->Set();
    grid->Render();
}

void InGameScene::ResizeScreen()
{
    //ī�޶� ȭ��� ���� 
    cam1->viewport.x = 0.0f;
    cam1->viewport.y = 0.0f;
    cam1->viewport.width = App.GetWidth();
    cam1->viewport.height = App.GetHeight();
    cam1->width = App.GetWidth();
    cam1->height = App.GetHeight();
}
