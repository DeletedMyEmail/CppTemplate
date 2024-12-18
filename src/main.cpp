#include "Log.h"

int main(int argc, char* argv[])
{
    Log::init();
    LOG_INFO("Hello, world!");
    return 0;
}
