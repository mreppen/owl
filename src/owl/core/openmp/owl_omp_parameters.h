/*
 * OWL - OCaml Scientific and Engineering Computing
 * Copyright (c) 2016-2019 Liang Wang <liang.wang@cl.cam.ac.uk>
 */

#ifndef OWL_OMP_PARAMETERS_H
#define OWL_OMP_PARAMETERS_H

#include "owl_core_engine.h"

/* FUN4 */

#define OMP_THRESHOLD_float32_reci OWL_OMP_THRESHOLD_RECI
#define OMP_THRESHOLD_float64_reci OWL_OMP_THRESHOLD_RECI
#define OMP_THRESHOLD_complex32_reci OWL_OMP_THRESHOLD_RECI
#define OMP_THRESHOLD_complex64_reci OWL_OMP_THRESHOLD_RECI

#define OMP_THRESHOLD_float32_abs OWL_OMP_THRESHOLD_ABS
#define OMP_THRESHOLD_float64_abs OWL_OMP_THRESHOLD_ABS
#define OMP_THRESHOLD_complex32_abs OWL_OMP_THRESHOLD_ABS
#define OMP_THRESHOLD_complex64_abs OWL_OMP_THRESHOLD_ABS

#define OMP_THRESHOLD_float32_abs2 OWL_OMP_THRESHOLD_ABS2
#define OMP_THRESHOLD_float64_abs2 OWL_OMP_THRESHOLD_ABS2
#define OMP_THRESHOLD_complex32_abs2 OWL_OMP_THRESHOLD_ABS2
#define OMP_THRESHOLD_complex64_abs2 OWL_OMP_THRESHOLD_ABS2

#define OMP_THRESHOLD_float32_signum OWL_OMP_THRESHOLD_SIGNUM
#define OMP_THRESHOLD_float64_signum OWL_OMP_THRESHOLD_SIGNUM
#define OMP_THRESHOLD_complex32_signum OWL_OMP_THRESHOLD_SIGNUM
#define OMP_THRESHOLD_complex64_signum OWL_OMP_THRESHOLD_SIGNUM

#define OMP_THRESHOLD_float32_sqr OWL_OMP_THRESHOLD_SQR
#define OMP_THRESHOLD_float64_sqr OWL_OMP_THRESHOLD_SQR
#define OMP_THRESHOLD_complex32_sqr OWL_OMP_THRESHOLD_SQR
#define OMP_THRESHOLD_complex64_sqr OWL_OMP_THRESHOLD_SQR

#define OMP_THRESHOLD_float32_sqrt OWL_OMP_THRESHOLD_SQRT
#define OMP_THRESHOLD_float64_sqrt OWL_OMP_THRESHOLD_SQRT
#define OMP_THRESHOLD_complex32_sqrt OWL_OMP_THRESHOLD_SQRT
#define OMP_THRESHOLD_complex64_sqrt OWL_OMP_THRESHOLD_SQRT

#define OMP_THRESHOLD_float32_cbrt OWL_OMP_THRESHOLD_CBRT
#define OMP_THRESHOLD_float64_cbrt OWL_OMP_THRESHOLD_CBRT
#define OMP_THRESHOLD_complex32_cbrt OWL_OMP_THRESHOLD_CBRT
#define OMP_THRESHOLD_complex64_cbrt OWL_OMP_THRESHOLD_CBRT

#define OMP_THRESHOLD_float32_exp OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_float64_exp OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_complex32_exp OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_complex64_exp OWL_OMP_THRESHOLD_EXP

#define OMP_THRESHOLD_float32_exp2 OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_float64_exp2 OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_complex32_exp2 OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_complex64_exp2 OWL_OMP_THRESHOLD_EXP

#define OMP_THRESHOLD_float32_exp10 OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_float64_exp10 OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_complex32_exp10 OWL_OMP_THRESHOLD_EXP
#define OMP_THRESHOLD_complex64_exp10 OWL_OMP_THRESHOLD_EXP

#define OMP_THRESHOLD_float32_expm1 OWL_OMP_THRESHOLD_EXPM1
#define OMP_THRESHOLD_float64_expm1 OWL_OMP_THRESHOLD_EXPM1
#define OMP_THRESHOLD_complex32_expm1 OWL_OMP_THRESHOLD_EXPM1
#define OMP_THRESHOLD_complex64_expm1 OWL_OMP_THRESHOLD_EXPM1

#define OMP_THRESHOLD_float32_log OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_float64_log OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_complex32_log OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_complex64_log OWL_OMP_THRESHOLD_LOG

#define OMP_THRESHOLD_float32_log2 OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_float64_log2 OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_complex32_log2 OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_complex64_log2 OWL_OMP_THRESHOLD_LOG

#define OMP_THRESHOLD_float32_log10 OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_float64_log10 OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_complex32_log10 OWL_OMP_THRESHOLD_LOG
#define OMP_THRESHOLD_complex64_log10 OWL_OMP_THRESHOLD_LOG

#define OMP_THRESHOLD_float32_log1p OWL_OMP_THRESHOLD_LOG1P
#define OMP_THRESHOLD_float64_log1p OWL_OMP_THRESHOLD_LOG1P
#define OMP_THRESHOLD_complex32_log1p OWL_OMP_THRESHOLD_LOG1P
#define OMP_THRESHOLD_complex64_log1p OWL_OMP_THRESHOLD_LOG1P

#define OMP_THRESHOLD_float32_sin OWL_OMP_THRESHOLD_SIN
#define OMP_THRESHOLD_float64_sin OWL_OMP_THRESHOLD_SIN
#define OMP_THRESHOLD_complex32_sin OWL_OMP_THRESHOLD_SIN
#define OMP_THRESHOLD_complex64_sin OWL_OMP_THRESHOLD_SIN

#define OMP_THRESHOLD_float32_cos OWL_OMP_THRESHOLD_COS
#define OMP_THRESHOLD_float64_cos OWL_OMP_THRESHOLD_COS
#define OMP_THRESHOLD_complex32_cos OWL_OMP_THRESHOLD_COS
#define OMP_THRESHOLD_complex64_cos OWL_OMP_THRESHOLD_COS

#define OMP_THRESHOLD_float32_tan OWL_OMP_THRESHOLD_TAN
#define OMP_THRESHOLD_float64_tan OWL_OMP_THRESHOLD_TAN
#define OMP_THRESHOLD_complex32_tan OWL_OMP_THRESHOLD_TAN
#define OMP_THRESHOLD_complex64_tan OWL_OMP_THRESHOLD_TAN

#define OMP_THRESHOLD_float32_asin OWL_OMP_THRESHOLD_ASIN
#define OMP_THRESHOLD_float64_asin OWL_OMP_THRESHOLD_ASIN
#define OMP_THRESHOLD_complex32_asin OWL_OMP_THRESHOLD_ASIN
#define OMP_THRESHOLD_complex64_asin OWL_OMP_THRESHOLD_ASIN

#define OMP_THRESHOLD_float32_acos OWL_OMP_THRESHOLD_ACOS
#define OMP_THRESHOLD_float64_acos OWL_OMP_THRESHOLD_ACOS
#define OMP_THRESHOLD_complex32_acos OWL_OMP_THRESHOLD_ACOS
#define OMP_THRESHOLD_complex64_acos OWL_OMP_THRESHOLD_ACOS

#define OMP_THRESHOLD_float32_atan OWL_OMP_THRESHOLD_ATAN
#define OMP_THRESHOLD_float64_atan OWL_OMP_THRESHOLD_ATAN
#define OMP_THRESHOLD_complex32_atan OWL_OMP_THRESHOLD_ATAN
#define OMP_THRESHOLD_complex64_atan OWL_OMP_THRESHOLD_ATAN

#define OMP_THRESHOLD_float32_sinh OWL_OMP_THRESHOLD_SINH
#define OMP_THRESHOLD_float64_sinh OWL_OMP_THRESHOLD_SINH
#define OMP_THRESHOLD_complex32_sinh OWL_OMP_THRESHOLD_SINH
#define OMP_THRESHOLD_complex64_sinh OWL_OMP_THRESHOLD_SINH

#define OMP_THRESHOLD_float32_cosh OWL_OMP_THRESHOLD_COSH
#define OMP_THRESHOLD_float64_cosh OWL_OMP_THRESHOLD_COSH
#define OMP_THRESHOLD_complex32_cosh OWL_OMP_THRESHOLD_COSH
#define OMP_THRESHOLD_complex64_cosh OWL_OMP_THRESHOLD_COSH

#define OMP_THRESHOLD_float32_tanh OWL_OMP_THRESHOLD_TANH
#define OMP_THRESHOLD_float64_tanh OWL_OMP_THRESHOLD_TANH
#define OMP_THRESHOLD_complex32_tanh OWL_OMP_THRESHOLD_TANH
#define OMP_THRESHOLD_complex64_tanh OWL_OMP_THRESHOLD_TANH

#define OMP_THRESHOLD_float32_asinh OWL_OMP_THRESHOLD_ASINH
#define OMP_THRESHOLD_float64_asinh OWL_OMP_THRESHOLD_ASINH
#define OMP_THRESHOLD_complex32_asinh OWL_OMP_THRESHOLD_ASINH
#define OMP_THRESHOLD_complex64_asinh OWL_OMP_THRESHOLD_ASINH

#define OMP_THRESHOLD_float32_acosh OWL_OMP_THRESHOLD_ACOSH
#define OMP_THRESHOLD_float64_acosh OWL_OMP_THRESHOLD_ACOSH
#define OMP_THRESHOLD_complex32_acosh OWL_OMP_THRESHOLD_ACOSH
#define OMP_THRESHOLD_complex64_acosh OWL_OMP_THRESHOLD_ACOSH

#define OMP_THRESHOLD_float32_atanh OWL_OMP_THRESHOLD_ATANH
#define OMP_THRESHOLD_float64_atanh OWL_OMP_THRESHOLD_ATANH
#define OMP_THRESHOLD_complex32_atanh OWL_OMP_THRESHOLD_ATANH
#define OMP_THRESHOLD_complex64_atanh OWL_OMP_THRESHOLD_ATANH

#define OMP_THRESHOLD_float32_erf OWL_OMP_THRESHOLD_ERF
#define OMP_THRESHOLD_float64_erf OWL_OMP_THRESHOLD_ERF

#define OMP_THRESHOLD_float32_erfc OWL_OMP_THRESHOLD_ERFC
#define OMP_THRESHOLD_float64_erfc OWL_OMP_THRESHOLD_ERFC

#define OMP_THRESHOLD_float32_logistic OWL_OMP_THRESHOLD_LOGISTIC
#define OMP_THRESHOLD_float64_logistic OWL_OMP_THRESHOLD_LOGISTIC

#define OMP_THRESHOLD_float32_relu OWL_OMP_THRESHOLD_RELU
#define OMP_THRESHOLD_float64_relu OWL_OMP_THRESHOLD_RELU

#define OMP_THRESHOLD_float32_softplus OWL_OMP_THRESHOLD_SOFTPLUS
#define OMP_THRESHOLD_float64_softplus OWL_OMP_THRESHOLD_SOFTPLUS

#define OMP_THRESHOLD_float32_softsign OWL_OMP_THRESHOLD_SOFTSIGN
#define OMP_THRESHOLD_float64_softsign OWL_OMP_THRESHOLD_SOFTSIGN

#define OMP_THRESHOLD_float32_sigmoid OWL_OMP_THRESHOLD_SIGMOID
#define OMP_THRESHOLD_float64_sigmoid OWL_OMP_THRESHOLD_SIGMOID

#define OMP_THRESHOLD_complex32_angle OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_complex64_angle OWL_OMP_THRESHOLD_DEFAULT

#define OMP_THRESHOLD_complex32_proj OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_complex64_proj OWL_OMP_THRESHOLD_DEFAULT

/* FUN5 */

#define OMP_THRESHOLD_float32_l1norm OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_float64_l1norm OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_complex32_l1norm OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_complex64_l1norm OWL_OMP_THRESHOLD_DEFAULT

#define OMP_THRESHOLD_float32_l2norm_sqr OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_float64_l2norm_sqr OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_complex32_l2norm_sqr OWL_OMP_THRESHOLD_DEFAULT
#define OMP_THRESHOLD_complex64_l2norm_sqr OWL_OMP_THRESHOLD_DEFAULT

#define OMP_THRESHOLD_float32_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_float64_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_complex32_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_complex64_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_int8_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_uint8_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_int16_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_uint16_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_int32_sum OWL_OMP_THRESHOLD_SUM
#define OMP_THRESHOLD_int64_sum OWL_OMP_THRESHOLD_SUM

#define OMP_THRESHOLD_float32_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_float64_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_complex32_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_complex64_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_int8_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_uint8_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_int16_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_uint16_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_int32_prod OWL_OMP_THRESHOLD_PROD
#define OMP_THRESHOLD_int64_prod OWL_OMP_THRESHOLD_PROD

#endif
