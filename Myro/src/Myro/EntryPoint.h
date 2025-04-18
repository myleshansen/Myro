#pragma once

#ifdef MR_PLATFORM_WINDOWS

extern Myro::Application* Myro::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Myro::CreateApplication();
	app->Run();
	delete app;
}

#endif