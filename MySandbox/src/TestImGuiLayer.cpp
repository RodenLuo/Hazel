#include <imgui/imgui.h>
#include "TestImGuiLayer.h"


TestImGuiLayer::TestImGuiLayer() : Layer("TestImGuiLayer")
{
}

//void TestImGuiLayer::OnDetach()
//{
//	HZ_PROFILE_FUNCTION();
//}
//
//void TestImGuiLayer::OnAttach() 
//{
//	HZ_PROFILE_FUNCTION();
//}
//void TestImGuiLayer::OnDetach() 
//{
//	HZ_PROFILE_FUNCTION();
//}
//
//void TestImGuiLayer::OnUpdate(Hazel::Timestep ts) {}
//

void TestImGuiLayer::OnImGuiRender() 
{
	HZ_PROFILE_FUNCTION();

	ImGui::Begin("Settings");

	auto stats = Hazel::Renderer2D::GetStats();
	ImGui::Text("Renderer2D Stats:");
	ImGui::Text("Draw Calls: %d", stats.DrawCalls);
	ImGui::Text("Quads: %d", stats.QuadCount);
	ImGui::Text("Vertices: %d", stats.GetTotalVertexCount());
	ImGui::Text("Indices: %d", stats.GetTotalIndexCount());

	ImGui::End();
}

//
//void TestImGuiLayer::OnEvent(Hazel::Event& event) {}
//
