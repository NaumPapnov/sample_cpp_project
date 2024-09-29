#include <benchmark/benchmark.h>

#include "my_add.hpp"

static void BM_my_add(benchmark::State& state) {
  my_add(2, 7);
}
BENCHMARK(BM_my_add);

BENCHMARK_MAIN();