#pragma once

#include "rhoban_unsorted/particle_filter/particle.h"
#include "rhoban_random/tools.h"

namespace rhoban_unsorted
{

//A Control class can control only one type of Particles
template <class P>
class Controller {
public:
  Controller()
    {
      engine = rhoban_random::getRandomEngine();
    }
  virtual ~Controller(){};

  /* Apply the predicted move over elapsedTime to the specified particle */
  virtual void move(P & p, double elapsedTime) {
    (void) p; (void) elapsedTime;// Avoiding warnings
  };

  /* Apply an exploration move over elapsedTime to the specified particle */
  virtual void explore(P & p, double elapsedTime){
    (void)p;
    (void)elapsedTime;
  }

protected:
  std::default_random_engine engine;

};

}
