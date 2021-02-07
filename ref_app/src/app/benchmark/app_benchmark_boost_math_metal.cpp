///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2021.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <cstdint>

#include <app/benchmark/app_benchmark.h>

#if(APP_BENCHMARK_TYPE == APP_BENCHMARK_TYPE_BOOST_MATH_METAL)

#define BOOST_NO_RTTI

#include <boost/math/special_functions/cbrt.hpp>

#include <app/benchmark/app_benchmark_detail.h>

extern double cb;
extern double x;

bool app::benchmark::run_boost_math_metal()
{
  // N[(789/100)^(1/3), 21]
  // 1.99079099553308523771
  cb = boost::math::cbrt(x);

  const bool result_is_ok = app::benchmark::detail::is_close_fraction(cb, 1.99079099553308523771);

  return result_is_ok;
}

double cb;
double x = 7.89;

#if defined(APP_BENCHMARK_STANDALONE_MAIN)
int main()
{
  // g++ -Wall -O3 -march=native -I./ref_app/src/mcal/host -I./ref_app/src -DAPP_BENCHMARK_TYPE=APP_BENCHMARK_TYPE_CRC -DAPP_BENCHMARK_STANDALONE_MAIN ./ref_app/src/app/benchmark/app_benchmark_crc.cpp -o ./ref_app/bin/app_benchmark_crc.exe

  bool result_is_ok = true;

  for(unsigned i = 0U; i < 64U; ++i)
  {
    result_is_ok &= app::benchmark::run_boost_math_metal();
  }

  return result_is_ok ? 0 : -1;
}

#endif

#endif // APP_BENCHMARK_TYPE_BOOST_MATH_METAL
