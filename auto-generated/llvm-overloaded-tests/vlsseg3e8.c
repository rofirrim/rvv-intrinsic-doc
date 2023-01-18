// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlsseg3e8_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8(v0, v1, v2, mask, base, bstride, vl);
}
