///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2013.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef _CSTDINT_IMPL_2010_02_23_H_
  #define _CSTDINT_IMPL_2010_02_23_H_

  #include <stdint.h>

  // Implement some C macros that belong in <stdint.h> if they are not present.

  #if !defined(INT8_C)
  #define INT8_C(x) ((signed char) (x))
  #endif
  #if !defined(INT16_C)
  #define INT16_C(x) ((signed int) (x))
  #endif
  #if !defined(INT32_C)
  #define INT32_C(x) ((signed long) (x##L))
  #endif
  #if !defined(INT64_C)
  #define INT64_C(x) ((signed long long) (x##LL))
  #endif

  #if !defined(UINT8_C)
  #define UINT8_C(x) ((unsigned char) (x##U))
  #endif
  #if !defined(UINT16_C)
  #define UINT16_C(x) ((unsigned int) (x##U))
  #endif
  #if !defined(UINT32_C)
  #define UINT32_C(x) ((unsigned long) (x##UL))
  #endif
  #if !defined(UINT64_C)
  #define UINT64_C(x) ((unsigned long long) (x##ULL))
  #endif

  // Implement some of <cstdint> for compilers that do not yet support it.

  namespace std
  {
    typedef  ::int8_t    int8_t;
    typedef  ::int16_t   int16_t;
    typedef  ::int32_t   int32_t;
    typedef  ::int64_t   int64_t;
    typedef ::uint8_t   uint8_t;
    typedef ::uint16_t  uint16_t;
    typedef ::uint32_t  uint32_t;
    typedef ::uint64_t  uint64_t;

    typedef  ::int_least8_t    int_least8_t;
    typedef  ::int_least16_t   int_least16_t;
    typedef  ::int_least32_t   int_least32_t;
    typedef  ::int_least64_t   int_least64_t;
    typedef ::uint_least8_t   uint_least8_t;
    typedef ::uint_least16_t  uint_least16_t;
    typedef ::uint_least32_t  uint_least32_t;
    typedef ::uint_least64_t  uint_least64_t;

    typedef  ::int_fast8_t    int_fast8_t;
    typedef  ::int_fast16_t   int_fast16_t;
    typedef  ::int_fast32_t   int_fast32_t;
    typedef  ::int_fast64_t   int_fast64_t;
    typedef ::uint_fast8_t   uint_fast8_t;
    typedef ::uint_fast16_t  uint_fast16_t;
    typedef ::uint_fast32_t  uint_fast32_t;
    typedef ::uint_fast64_t  uint_fast64_t;

    typedef  ::intmax_t   intmax_t;
    typedef ::uintmax_t  uintmax_t;
    typedef ::uintptr_t  uintptr_t;
  }

#endif // _CSTDINT_IMPL_2010_02_23_H_
