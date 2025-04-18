#include <Myro.h>

class Sandbox : public Myro::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Myro::Application* Myro::CreateApplication()
{
	return new Sandbox();
}