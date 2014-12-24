cmake_minimum_required(VERSION 2.8.11)
### Steps for customization
# 1. Change TemplateExe with the name of your executable package
# 2. Change version information
# 3. Add your code in src
# Notice: this executable depends on the library TemplatePkg to demonstrate how you can 
# deal with dependencies, update accordingly.

project(TemplateExe CXX)

set(TEMPLATE_EXE_MAJOR_VERSION 0)
set(TEMPLATE_EXE_MINOR_VERSION 0)
set(TEMPLATE_EXE_PATCH_VERSION 1)
set(TEMPLATE_EXE_VERSION ${TEMPLATE_EXE_MAJOR_VERSION}.${TEMPLATE_EXE_MINOR_VERSION}.${TEMPLATE_EXE_PATCH_VERSION})

find_package(YCM REQUIRED)
find_package(TemplatePkg 0.0.1 REQUIRED)

add_subdirectory(src)

include(AddUninstallTarget)
