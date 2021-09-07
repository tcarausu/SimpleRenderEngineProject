#include "sre/SDLRenderer.hpp"

using namespace sre;
using namespace std;

int main() {
    SDLRenderer r;
    r.init().withSdlWindowFlags(SDL_WINDOW_OPENGL);
    r.frameRender = [](){
        RenderPass rp = RenderPass::create().build();
        rp.drawLines({{-.5,-.5,0},{.5,.5,0},{-.5,.5,0},{.5,-.5,0}});
    };
    r.startEventLoop();

    return 0;
}

