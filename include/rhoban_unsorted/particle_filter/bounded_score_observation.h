#pragma once

#include "rhoban_unsorted/particle_filter/observation.h"

namespace rhoban_unsorted
{
template <class T>
class BoundedScoreObservation : public Observation<T>
{
public:
  /// Return the minimal score reachable for the given observation
  virtual double getMinScore() const = 0;
};

}  // namespace rhoban_unsorted
