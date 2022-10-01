#pragma once
#include <Hazel.h>
#include "Hazel/Core/Timestep.h"
#include "Hazel/Events/Event.h"


class TestImGuiLayer : public Hazel::Layer
{	
public:
	TestImGuiLayer();
	virtual ~TestImGuiLayer() = default;

	virtual void OnAttach() {}
	virtual void OnDetach() {}
	virtual void OnUpdate(Hazel::Timestep ts) {}
	virtual void OnImGuiRender() override;
	virtual void OnEvent(Hazel::Event & event) {}

};

