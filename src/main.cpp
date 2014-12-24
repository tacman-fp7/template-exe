#include <TemplateLib/template-lib.h>
#include <cstdlib>

int main(int argc, char *argv[])
{
    TemplateLib::aClass foo;
    if(!foo.doSomething())
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}
