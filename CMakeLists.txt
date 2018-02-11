cmake_minimum_required(VERSION 3.8.2)
project (hello)


add_executable(hello helloworld.cpp)


if (MSVC)
	#target_compile_options(hello PUBLIC /WX)
	set_target_properties(hello PROPERTIES VS_PROPERTY_SHEETS "${CMAKE_CURRENT_SOURCE_DIR}/msvc/blabla.props")
endif(MSVC)