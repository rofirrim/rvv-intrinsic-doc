// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfwadd_vv_f32mf2_tu(vfloat32mf2_t vd, vfloat16mf4_t vs2,
                                       vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_tu(vfloat32mf2_t vd, vfloat16mf4_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2,
                                       vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_tu(vfloat32m1_t vd, vfloat16mf2_t vs2,
                                     vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_tu(vfloat32m1_t vd, vfloat16mf2_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                     vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_tu(vfloat32m2_t vd, vfloat16m1_t vs2,
                                     vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_tu(vfloat32m2_t vd, vfloat16m1_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2,
                                     vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_tu(vfloat32m4_t vd, vfloat16m2_t vs2,
                                     vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_tu(vfloat32m4_t vd, vfloat16m2_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2,
                                     vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_tu(vfloat32m8_t vd, vfloat16m4_t vs2,
                                     vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_tu(vfloat32m8_t vd, vfloat16m4_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2,
                                     vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_tu(vfloat64m1_t vd, vfloat32mf2_t vs2,
                                     vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_tu(vfloat64m1_t vd, vfloat32mf2_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                     vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_tu(vfloat64m2_t vd, vfloat32m1_t vs2,
                                     vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_tu(vfloat64m2_t vd, vfloat32m1_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs2,
                                     vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_tu(vfloat64m4_t vd, vfloat32m2_t vs2,
                                     vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_tu(vfloat64m4_t vd, vfloat32m2_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs2,
                                     vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_tu(vfloat64m8_t vd, vfloat32m4_t vs2,
                                     vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_tu(vfloat64m8_t vd, vfloat32m4_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs2,
                                     vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs2,
                                     float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                        vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                        vfloat16mf4_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                        vfloat32mf2_t vs2, vfloat16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                        vfloat32mf2_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                      vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                      vfloat16mf2_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                      vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                      vfloat32m1_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                      vfloat16m1_t vs2, vfloat16m1_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                      vfloat16m1_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                      vfloat32m2_t vs2, vfloat16m1_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                      vfloat32m2_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                      vfloat16m2_t vs2, vfloat16m2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                      vfloat16m2_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                      vfloat32m4_t vs2, vfloat16m2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                      vfloat32m4_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                      vfloat16m4_t vs2, vfloat16m4_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                      vfloat16m4_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                      vfloat32m8_t vs2, vfloat16m4_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                      vfloat32m8_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                      vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                      vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                      vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                      vfloat64m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                      vfloat32m1_t vs2, vfloat32m1_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                      vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                      vfloat64m2_t vs2, vfloat32m1_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                      vfloat64m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                      vfloat32m2_t vs2, vfloat32m2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                      vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                      vfloat64m4_t vs2, vfloat32m2_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                      vfloat64m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                      vfloat32m4_t vs2, vfloat32m4_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                      vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                      vfloat64m8_t vs2, vfloat32m4_t vs1,
                                      size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                      vfloat64m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                         vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                         vfloat16mf4_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                         vfloat32mf2_t vs2, vfloat16mf4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                         vfloat32mf2_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                       vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                       vfloat16mf2_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                       vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                       vfloat32m1_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                       vfloat16m1_t vs2, vfloat16m1_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                       vfloat16m1_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                       vfloat32m2_t vs2, vfloat16m1_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                       vfloat32m2_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                       vfloat16m2_t vs2, vfloat16m2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                       vfloat16m2_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                       vfloat32m4_t vs2, vfloat16m2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                       vfloat32m4_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                       vfloat16m4_t vs2, vfloat16m4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                       vfloat16m4_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                       vfloat32m8_t vs2, vfloat16m4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                       vfloat32m8_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                       vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                       vfloat32mf2_t vs2, float rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                       vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                       vfloat64m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                       vfloat32m1_t vs2, vfloat32m1_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                       vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                       vfloat64m2_t vs2, vfloat32m1_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                       vfloat64m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                       vfloat32m2_t vs2, vfloat32m2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                       vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                       vfloat64m4_t vs2, vfloat32m2_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                       vfloat64m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                       vfloat32m4_t vs2, vfloat32m4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                       vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                       vfloat64m8_t vs2, vfloat32m4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                       vfloat64m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                       vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                       vfloat16mf4_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                       vfloat32mf2_t vs2, vfloat16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                       vfloat32mf2_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                     vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                     vfloat16mf2_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                     vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                     vfloat32m1_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                     vfloat16m1_t vs2, vfloat16m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                     vfloat16m1_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                     vfloat32m2_t vs2, vfloat16m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                     vfloat32m2_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                     vfloat16m2_t vs2, vfloat16m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                     vfloat16m2_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                     vfloat32m4_t vs2, vfloat16m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                     vfloat32m4_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                     vfloat16m4_t vs2, vfloat16m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                     vfloat16m4_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                     vfloat32m8_t vs2, vfloat16m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                     vfloat32m8_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                     vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                     vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                     vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                     vfloat64m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                     vfloat32m1_t vs2, vfloat32m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                     vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                     vfloat64m2_t vs2, vfloat32m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                     vfloat64m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                     vfloat32m2_t vs2, vfloat32m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                     vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                     vfloat64m4_t vs2, vfloat32m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                     vfloat64m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                     vfloat32m4_t vs2, vfloat32m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                     vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                     vfloat64m8_t vs2, vfloat32m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                     vfloat64m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat16mf4_t vs2,
                                          vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat16mf4_t vs2,
                                          _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2,
                                          vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2,
                                          _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_tu(vfloat32m1_t vd, vfloat16mf2_t vs2,
                                        vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_tu(vfloat32m1_t vd, vfloat16mf2_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                        vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_tu(vfloat32m2_t vd, vfloat16m1_t vs2,
                                        vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_tu(vfloat32m2_t vd, vfloat16m1_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_tu(vfloat32m2_t vd, vfloat32m2_t vs2,
                                        vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_tu(vfloat32m2_t vd, vfloat32m2_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_tu(vfloat32m4_t vd, vfloat16m2_t vs2,
                                        vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_tu(vfloat32m4_t vd, vfloat16m2_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_tu(vfloat32m4_t vd, vfloat32m4_t vs2,
                                        vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_tu(vfloat32m4_t vd, vfloat32m4_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_tu(vfloat32m8_t vd, vfloat16m4_t vs2,
                                        vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_tu(vfloat32m8_t vd, vfloat16m4_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_tu(vfloat32m8_t vd, vfloat32m8_t vs2,
                                        vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_tu(vfloat32m8_t vd, vfloat32m8_t vs2,
                                        _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_tu(vfloat64m1_t vd, vfloat32mf2_t vs2,
                                        vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_tu(vfloat64m1_t vd, vfloat32mf2_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                        vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_tu(vfloat64m2_t vd, vfloat32m1_t vs2,
                                        vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_tu(vfloat64m2_t vd, vfloat32m1_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_tu(vfloat64m2_t vd, vfloat64m2_t vs2,
                                        vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_tu(vfloat64m2_t vd, vfloat64m2_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_tu(vfloat64m4_t vd, vfloat32m2_t vs2,
                                        vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_tu(vfloat64m4_t vd, vfloat32m2_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_tu(vfloat64m4_t vd, vfloat64m4_t vs2,
                                        vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_tu(vfloat64m4_t vd, vfloat64m4_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_tu(vfloat64m8_t vd, vfloat32m4_t vs2,
                                        vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_tu(vfloat64m8_t vd, vfloat32m4_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_vf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_tu(vfloat64m8_t vd, vfloat64m8_t vs2,
                                        vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_tu(vfloat64m8_t vd, vfloat64m8_t vs2,
                                        float rs1, size_t vl) {
  return __riscv_vfwadd_wf_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                           size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vfloat16mf4_t vs2, _Float16 rs1,
                                           size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vfloat32mf2_t vs2, vfloat16mf4_t vs1,
                                           size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vfloat32mf2_t vs2, _Float16 rs1,
                                           size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vfloat16mf2_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vfloat32m1_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vfloat16m1_t vs2, vfloat16m1_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vfloat16m1_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vfloat32m2_t vs2, vfloat16m1_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vfloat32m2_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vfloat16m2_t vs2, vfloat16m2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vfloat16m2_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vfloat32m4_t vs2, vfloat16m2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vfloat32m4_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_tum(vbool4_t vm, vfloat32m8_t vd,
                                         vfloat16m4_t vs2, vfloat16m4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_tum(vbool4_t vm, vfloat32m8_t vd,
                                         vfloat16m4_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_tum(vbool4_t vm, vfloat32m8_t vd,
                                         vfloat32m8_t vs2, vfloat16m4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_tum(vbool4_t vm, vfloat32m8_t vd,
                                         vfloat32m8_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd,
                                         vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd,
                                         vfloat32mf2_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd,
                                         vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd,
                                         vfloat64m1_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_tum(vbool32_t vm, vfloat64m2_t vd,
                                         vfloat32m1_t vs2, vfloat32m1_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_tum(vbool32_t vm, vfloat64m2_t vd,
                                         vfloat32m1_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_tum(vbool32_t vm, vfloat64m2_t vd,
                                         vfloat64m2_t vs2, vfloat32m1_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_tum(vbool32_t vm, vfloat64m2_t vd,
                                         vfloat64m2_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_tum(vbool16_t vm, vfloat64m4_t vd,
                                         vfloat32m2_t vs2, vfloat32m2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_tum(vbool16_t vm, vfloat64m4_t vd,
                                         vfloat32m2_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_tum(vbool16_t vm, vfloat64m4_t vd,
                                         vfloat64m4_t vs2, vfloat32m2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_tum(vbool16_t vm, vfloat64m4_t vd,
                                         vfloat64m4_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_tum(vbool8_t vm, vfloat64m8_t vd,
                                         vfloat32m4_t vs2, vfloat32m4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_tum(vbool8_t vm, vfloat64m8_t vd,
                                         vfloat32m4_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_tum(vbool8_t vm, vfloat64m8_t vd,
                                         vfloat64m8_t vs2, vfloat32m4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_tum(vbool8_t vm, vfloat64m8_t vd,
                                         vfloat64m8_t vs2, float rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vfloat16mf4_t vs2,
                                            vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vfloat16mf4_t vs2, _Float16 rs1,
                                            size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vfloat32mf2_t vs2,
                                            vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vfloat32mf2_t vs2, _Float16 rs1,
                                            size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vfloat16mf2_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vfloat32m1_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vfloat16m1_t vs2, vfloat16m1_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vfloat16m1_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vfloat32m2_t vs2, vfloat16m1_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vfloat32m2_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vfloat16m2_t vs2, vfloat16m2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vfloat16m2_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vfloat32m4_t vs2, vfloat16m2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vfloat32m4_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd,
                                          vfloat16m4_t vs2, vfloat16m4_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd,
                                          vfloat16m4_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd,
                                          vfloat32m8_t vs2, vfloat16m4_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd,
                                          vfloat32m8_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_tumu(vbool64_t vm, vfloat64m1_t vd,
                                          vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_tumu(vbool64_t vm, vfloat64m1_t vd,
                                          vfloat32mf2_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_tumu(vbool64_t vm, vfloat64m1_t vd,
                                          vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_tumu(vbool64_t vm, vfloat64m1_t vd,
                                          vfloat64m1_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_tumu(vbool32_t vm, vfloat64m2_t vd,
                                          vfloat32m1_t vs2, vfloat32m1_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_tumu(vbool32_t vm, vfloat64m2_t vd,
                                          vfloat32m1_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_tumu(vbool32_t vm, vfloat64m2_t vd,
                                          vfloat64m2_t vs2, vfloat32m1_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_tumu(vbool32_t vm, vfloat64m2_t vd,
                                          vfloat64m2_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_tumu(vbool16_t vm, vfloat64m4_t vd,
                                          vfloat32m2_t vs2, vfloat32m2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_tumu(vbool16_t vm, vfloat64m4_t vd,
                                          vfloat32m2_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_tumu(vbool16_t vm, vfloat64m4_t vd,
                                          vfloat64m4_t vs2, vfloat32m2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_tumu(vbool16_t vm, vfloat64m4_t vd,
                                          vfloat64m4_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_tumu(vbool8_t vm, vfloat64m8_t vd,
                                          vfloat32m4_t vs2, vfloat32m4_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_tumu(vbool8_t vm, vfloat64m8_t vd,
                                          vfloat32m4_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_tumu(vbool8_t vm, vfloat64m8_t vd,
                                          vfloat64m8_t vs2, vfloat32m4_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_tumu(vbool8_t vm, vfloat64m8_t vd,
                                          vfloat64m8_t vs2, float rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vfloat16mf4_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vfloat32mf2_t vs2, vfloat16mf4_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vfloat32mf2_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vfloat16mf2_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vfloat32m1_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vfloat16m1_t vs2, vfloat16m1_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vfloat16m1_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vfloat32m2_t vs2, vfloat16m1_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vfloat32m2_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vfloat16m2_t vs2, vfloat16m2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vfloat16m2_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vfloat32m4_t vs2, vfloat16m2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vfloat32m4_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_mu(vbool4_t vm, vfloat32m8_t vd,
                                        vfloat16m4_t vs2, vfloat16m4_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_mu(vbool4_t vm, vfloat32m8_t vd,
                                        vfloat16m4_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_mu(vbool4_t vm, vfloat32m8_t vd,
                                        vfloat32m8_t vs2, vfloat16m4_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_mu(vbool4_t vm, vfloat32m8_t vd,
                                        vfloat32m8_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_mu(vbool64_t vm, vfloat64m1_t vd,
                                        vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_mu(vbool64_t vm, vfloat64m1_t vd,
                                        vfloat32mf2_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_mu(vbool64_t vm, vfloat64m1_t vd,
                                        vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_mu(vbool64_t vm, vfloat64m1_t vd,
                                        vfloat64m1_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_mu(vbool32_t vm, vfloat64m2_t vd,
                                        vfloat32m1_t vs2, vfloat32m1_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_mu(vbool32_t vm, vfloat64m2_t vd,
                                        vfloat32m1_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_mu(vbool32_t vm, vfloat64m2_t vd,
                                        vfloat64m2_t vs2, vfloat32m1_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_mu(vbool32_t vm, vfloat64m2_t vd,
                                        vfloat64m2_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_mu(vbool16_t vm, vfloat64m4_t vd,
                                        vfloat32m2_t vs2, vfloat32m2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_mu(vbool16_t vm, vfloat64m4_t vd,
                                        vfloat32m2_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_mu(vbool16_t vm, vfloat64m4_t vd,
                                        vfloat64m4_t vs2, vfloat32m2_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_mu(vbool16_t vm, vfloat64m4_t vd,
                                        vfloat64m4_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_mu(vbool8_t vm, vfloat64m8_t vd,
                                        vfloat32m4_t vs2, vfloat32m4_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_vv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_mu(vbool8_t vm, vfloat64m8_t vd,
                                        vfloat32m4_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_vf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_mu(vbool8_t vm, vfloat64m8_t vd,
                                        vfloat64m8_t vs2, vfloat32m4_t vs1,
                                        size_t vl) {
  return __riscv_vfwadd_wv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_mu(vbool8_t vm, vfloat64m8_t vd,
                                        vfloat64m8_t vs2, float rs1,
                                        size_t vl) {
  return __riscv_vfwadd_wf_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}
