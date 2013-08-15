
#ifndef SDL_INIT_H_
#define SDL_INIT_H_

namespace rwc {

class SDLinit {
 public:
  SDLinit(uint32_t flags = 0) throw(FatalErr) {
    if (SDL_Init(flags) != 0) {
      throw FatalErr();
    }
  };

  ~SDLinit() {
    SDL_Quit();
  };
};

} // namespace rwc

#endif
