#include <Hazel.h>
#include <Hazel/Core/EntryPoint.h>
#include <Hazel/Events/Event.h>
#include <Hazel/Events/ApplicationEvent.h>

#include "TestImGuiLayer.h"

class MySandbox : public Hazel::Application
{
public:
	MySandbox(const Hazel::ApplicationSpecification& specification)
		: Hazel::Application(specification)
	{
		PushOverlay(new TestImGuiLayer());
	}

	~MySandbox()
	{

	}

};

Hazel::Application* Hazel::CreateApplication(Hazel::ApplicationCommandLineArgs args)
{
	ApplicationSpecification spec;
	spec.Name = "MySandbox";
	spec.WorkingDirectory = "../Hazelnut";
	spec.CommandLineArgs = args;

	WindowResizeEvent e(1280, 720);
	HZ_TRACE(e);

	HZ_CORE_TRACE("MySandbox CORE CreateApplication!");
	HZ_CORE_INFO("MySandbox CORE INFO");
	HZ_CORE_WARN("MySandbox CORE WARN");
	HZ_CORE_ERROR("MySandbox CORE ERROR");
	HZ_CORE_CRITICAL("MySandbox CORE CRITICAL");

	HZ_TRACE("MySandbox CreateApplication!");
	HZ_INFO("MySandbox INFO");
	int a = 5;
	HZ_WARN("MySandbox WARN! Var = {0}", a);
	HZ_ERROR("MySandbox ERROR");
	HZ_CRITICAL("MySandbox CRITICAL");

	return new MySandbox(spec);
}
