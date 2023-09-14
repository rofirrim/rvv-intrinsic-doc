/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg8e64_v_f64m1x8(float64_t *base, vfloat64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64(base, v_tuple, vl);
}

void test_vsseg8e64_v_i64m1x8(int64_t *base, vint64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64(base, v_tuple, vl);
}

void test_vsseg8e64_v_u64m1x8(uint64_t *base, vuint64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64(base, v_tuple, vl);
}

void test_vsseg8e64_v_f64m1x8_m(vbool64_t mask, float64_t *base, vfloat64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64(mask, base, v_tuple, vl);
}

void test_vsseg8e64_v_i64m1x8_m(vbool64_t mask, int64_t *base, vint64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64(mask, base, v_tuple, vl);
}

void test_vsseg8e64_v_u64m1x8_m(vbool64_t mask, uint64_t *base, vuint64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg8e64\.[ivxfswum.]+\s+} 6 } } */