set(template_exe_SRCS main.cpp)

add_executable(template-exe main.cpp)
target_link_libraries(template-exe TemplatePkg::template-lib)

install(TARGETS template-exe DESTINATION bin)
