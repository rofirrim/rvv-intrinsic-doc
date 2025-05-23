#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8m1_t test_vredmaxu_vs_u8mf8_u8m1(vuint8m1_t dest, vuint8mf8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8mf8_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8mf4_u8m1(vuint8m1_t dest, vuint8mf4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8mf4_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8mf2_u8m1(vuint8m1_t dest, vuint8mf2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8mf2_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m1_u8m1(vuint8m1_t dest, vuint8m1_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m1_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m2_u8m1(vuint8m1_t dest, vuint8m2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m2_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m4_u8m1(vuint8m1_t dest, vuint8m4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m4_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m8_u8m1(vuint8m1_t dest, vuint8m8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m8_u8m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16mf4_u16m1(vuint16m1_t dest, vuint16mf4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16mf4_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16mf2_u16m1(vuint16m1_t dest, vuint16mf2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16mf2_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m1_u16m1(vuint16m1_t dest, vuint16m1_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m1_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m2_u16m1(vuint16m1_t dest, vuint16m2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m2_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m4_u16m1(vuint16m1_t dest, vuint16m4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m4_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m8_u16m1(vuint16m1_t dest, vuint16m8_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m8_u16m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32mf2_u32m1(vuint32m1_t dest, vuint32mf2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32mf2_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m1_u32m1(vuint32m1_t dest, vuint32m1_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m1_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m2_u32m1(vuint32m1_t dest, vuint32m2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m2_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m4_u32m1(vuint32m1_t dest, vuint32m4_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m4_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m8_u32m1(vuint32m1_t dest, vuint32m8_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m8_u32m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m1_u64m1(vuint64m1_t dest, vuint64m1_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m1_u64m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m2_u64m1(vuint64m1_t dest, vuint64m2_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m2_u64m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m4_u64m1(vuint64m1_t dest, vuint64m4_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m4_u64m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m8_u64m1(vuint64m1_t dest, vuint64m8_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m8_u64m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8mf8_u8m1_m(vbool64_t mask, vuint8m1_t dest, vuint8mf8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8mf8_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8mf4_u8m1_m(vbool32_t mask, vuint8m1_t dest, vuint8mf4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8mf4_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8mf2_u8m1_m(vbool16_t mask, vuint8m1_t dest, vuint8mf2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8mf2_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m1_u8m1_m(vbool8_t mask, vuint8m1_t dest, vuint8m1_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m1_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m2_u8m1_m(vbool4_t mask, vuint8m1_t dest, vuint8m2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m2_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m4_u8m1_m(vbool2_t mask, vuint8m1_t dest, vuint8m4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m4_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredmaxu_vs_u8m8_u8m1_m(vbool1_t mask, vuint8m1_t dest, vuint8m8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredmaxu_vs_u8m8_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16mf4_u16m1_m(vbool64_t mask, vuint16m1_t dest, vuint16mf4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16mf4_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16mf2_u16m1_m(vbool32_t mask, vuint16m1_t dest, vuint16mf2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16mf2_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m1_u16m1_m(vbool16_t mask, vuint16m1_t dest, vuint16m1_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m1_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m2_u16m1_m(vbool8_t mask, vuint16m1_t dest, vuint16m2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m2_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m4_u16m1_m(vbool4_t mask, vuint16m1_t dest, vuint16m4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m4_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredmaxu_vs_u16m8_u16m1_m(vbool2_t mask, vuint16m1_t dest, vuint16m8_t vector, vuint16m1_t scalar, size_t vl) {
  return vredmaxu_vs_u16m8_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32mf2_u32m1_m(vbool64_t mask, vuint32m1_t dest, vuint32mf2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32mf2_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m1_u32m1_m(vbool32_t mask, vuint32m1_t dest, vuint32m1_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m1_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m2_u32m1_m(vbool16_t mask, vuint32m1_t dest, vuint32m2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m2_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m4_u32m1_m(vbool8_t mask, vuint32m1_t dest, vuint32m4_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m4_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredmaxu_vs_u32m8_u32m1_m(vbool4_t mask, vuint32m1_t dest, vuint32m8_t vector, vuint32m1_t scalar, size_t vl) {
  return vredmaxu_vs_u32m8_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m1_u64m1_m(vbool64_t mask, vuint64m1_t dest, vuint64m1_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m1_u64m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m2_u64m1_m(vbool32_t mask, vuint64m1_t dest, vuint64m2_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m2_u64m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m4_u64m1_m(vbool16_t mask, vuint64m1_t dest, vuint64m4_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m4_u64m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredmaxu_vs_u64m8_u64m1_m(vbool8_t mask, vuint64m1_t dest, vuint64m8_t vector, vuint64m1_t scalar, size_t vl) {
  return vredmaxu_vs_u64m8_u64m1_m(mask, dest, vector, scalar, vl);
}

