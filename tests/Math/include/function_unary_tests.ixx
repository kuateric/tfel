/*!
 * \file   tests/Math/include/function_unary_tests.ixx
 * \brief
 * \author Thomas Helfer
 * \date   28 Jun 2006
 * \copyright Copyright (C) 2006-2018 CEA/DEN, EDF R&D. All rights
 * reserved.
 * This project is publicly released under either the GNU GPL Licence
 * or the CECILL-A licence. A copy of thoses licences are delivered
 * with the sources of TFEL. CEA or EDF may also distribute this
 * project under specific licensing conditions.
 */

#ifndef LIB_TFEL_FUNCTION_IXX
#define LIB_TFEL_FUNCTION_IXX

#include <cmath>
#include <cstdlib>

#define ASSERT(X)                                 \
  if (!(X)) {                                     \
    std::cerr << "(" << #X << ")"                 \
              << " is not satified" << std::endl; \
    std::exit(EXIT_FAILURE);                      \
  }                                               \
  static_cast<void>(0)

template <typename VectorType>
std::enable_if_t<tfel::math::implementsVectorConcept<VectorType>(), void>
function(const VectorType& x) {
  std::cout << x(0) << " " << x(1) << " " << x(2) << std::endl;
  std::cout << "------" << std::endl;
}

template <typename VectorType>
std::enable_if_t<tfel::math::implementsVectorConcept<VectorType>(), void>
function(const VectorType& x,
         const tfel::math::numeric_type<VectorType> v0,
         const tfel::math::numeric_type<VectorType> v1,
         const tfel::math::numeric_type<VectorType> v2,
         const tfel::math::numeric_type<VectorType> eps,
         const unsigned int test_number) {
#ifdef TFEL_VERBOSE
  std::cout << "Test : " << test_number << std::endl;
#else
  static_cast<void>(test_number);
#endif
  ASSERT(std::abs(x(0) - v0) <= eps);
  ASSERT(std::abs(x(1) - v1) <= eps);
  ASSERT(std::abs(x(2) - v2) <= eps);
}

template <typename MatrixType>
std::enable_if_t<tfel::math::implementsMatrixConcept<MatrixType>(), void>
function(const MatrixType& x,
         const tfel::math::numeric_type<MatrixType> v0,
         const tfel::math::numeric_type<MatrixType> v1,
         const tfel::math::numeric_type<MatrixType> v2,
         const tfel::math::numeric_type<MatrixType> v3,
         const tfel::math::numeric_type<MatrixType> eps,
         const unsigned int test_number) {
#ifdef TFEL_VERBOSE
  std::cout << "Test : " << test_number << std::endl;
#else
  static_cast<void>(test_number);
#endif
  ASSERT(std::abs(x(0, 0) - v0) <= eps);
  ASSERT(std::abs(x(0, 1) - v1) <= eps);
  ASSERT(std::abs(x(1, 0) - v2) <= eps);
  ASSERT(std::abs(x(1, 1) - v3) <= eps);
}

template <typename StensorType>
std::enable_if_t<tfel::math::implementsStensorConcept<StensorType>(), void>
function(const StensorType& x) {
  std::cout << x(0) << " " << x(1) << " " << x(2) << std::endl;
  std::cout << "------" << std::endl;
}

#endif /* LIB_TFEL_FUNCTION_IXX */
