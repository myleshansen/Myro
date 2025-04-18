#pragma once

#include "Core.h"

namespace Myro {

	class MYRO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	// To be defined in CLIENT
	Application* CreateApplication();

}


