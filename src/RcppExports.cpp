// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_headersC
DataFrame get_headersC(RawVector x);
RcppExport SEXP _AGread_get_headersC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_headersC(x));
    return rcpp_result_gen;
END_RCPP
}
// latch_accel
NumericVector latch_accel(int vector_size, NumericVector accel_input, int samp_rate);
RcppExport SEXP _AGread_latch_accel(SEXP vector_sizeSEXP, SEXP accel_inputSEXP, SEXP samp_rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type vector_size(vector_sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type accel_input(accel_inputSEXP);
    Rcpp::traits::input_parameter< int >::type samp_rate(samp_rateSEXP);
    rcpp_result_gen = Rcpp::wrap(latch_accel(vector_size, accel_input, samp_rate));
    return rcpp_result_gen;
END_RCPP
}
// get_latch_index
IntegerVector get_latch_index(DatetimeVector missing_times, DatetimeVector reference_times);
RcppExport SEXP _AGread_get_latch_index(SEXP missing_timesSEXP, SEXP reference_timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DatetimeVector >::type missing_times(missing_timesSEXP);
    Rcpp::traits::input_parameter< DatetimeVector >::type reference_times(reference_timesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_latch_index(missing_times, reference_times));
    return rcpp_result_gen;
END_RCPP
}
// get_latch_values
DataFrame get_latch_values(IntegerVector indices, DataFrame RAW);
RcppExport SEXP _AGread_get_latch_values(SEXP indicesSEXP, SEXP RAWSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type RAW(RAWSEXP);
    rcpp_result_gen = Rcpp::wrap(get_latch_values(indices, RAW));
    return rcpp_result_gen;
END_RCPP
}
// get_latch_entries
DataFrame get_latch_entries(int samp_rate, DatetimeVector timestamps, NumericVector accel_x, NumericVector accel_y, NumericVector accel_z, bool return_empty);
RcppExport SEXP _AGread_get_latch_entries(SEXP samp_rateSEXP, SEXP timestampsSEXP, SEXP accel_xSEXP, SEXP accel_ySEXP, SEXP accel_zSEXP, SEXP return_emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type samp_rate(samp_rateSEXP);
    Rcpp::traits::input_parameter< DatetimeVector >::type timestamps(timestampsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type accel_x(accel_xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type accel_y(accel_ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type accel_z(accel_zSEXP);
    Rcpp::traits::input_parameter< bool >::type return_empty(return_emptySEXP);
    rcpp_result_gen = Rcpp::wrap(get_latch_entries(samp_rate, timestamps, accel_x, accel_y, accel_z, return_empty));
    return rcpp_result_gen;
END_RCPP
}
// latch_replicate
DataFrame latch_replicate(Datetime start_time, Datetime stop_time, double x_val, double y_val, double z_val);
RcppExport SEXP _AGread_latch_replicate(SEXP start_timeSEXP, SEXP stop_timeSEXP, SEXP x_valSEXP, SEXP y_valSEXP, SEXP z_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Datetime >::type start_time(start_timeSEXP);
    Rcpp::traits::input_parameter< Datetime >::type stop_time(stop_timeSEXP);
    Rcpp::traits::input_parameter< double >::type x_val(x_valSEXP);
    Rcpp::traits::input_parameter< double >::type y_val(y_valSEXP);
    Rcpp::traits::input_parameter< double >::type z_val(z_valSEXP);
    rcpp_result_gen = Rcpp::wrap(latch_replicate(start_time, stop_time, x_val, y_val, z_val));
    return rcpp_result_gen;
END_RCPP
}
// get_short
int get_short(RawVector x, int i1, int i2, bool is_signed);
RcppExport SEXP _AGread_get_short(SEXP xSEXP, SEXP i1SEXP, SEXP i2SEXP, SEXP is_signedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type i1(i1SEXP);
    Rcpp::traits::input_parameter< int >::type i2(i2SEXP);
    Rcpp::traits::input_parameter< bool >::type is_signed(is_signedSEXP);
    rcpp_result_gen = Rcpp::wrap(get_short(x, i1, i2, is_signed));
    return rcpp_result_gen;
END_RCPP
}
// mid_round
double mid_round(double input, int digits);
RcppExport SEXP _AGread_mid_round(SEXP inputSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type input(inputSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(mid_round(input, digits));
    return rcpp_result_gen;
END_RCPP
}
// print_progC
void print_progC(int n, const char* label);
RcppExport SEXP _AGread_print_progC(SEXP nSEXP, SEXP labelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const char* >::type label(labelSEXP);
    print_progC(n, label);
    return R_NilValue;
END_RCPP
}
// checksumC
void checksumC(RawVector log, int start_index, int end_index);
RcppExport SEXP _AGread_checksumC(SEXP logSEXP, SEXP start_indexSEXP, SEXP end_indexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type log(logSEXP);
    Rcpp::traits::input_parameter< int >::type start_index(start_indexSEXP);
    Rcpp::traits::input_parameter< int >::type end_index(end_indexSEXP);
    checksumC(log, start_index, end_index);
    return R_NilValue;
END_RCPP
}
// parse_IMU_C
List parse_IMU_C(DataFrame imu_records, RawVector log, DataFrame info, int id, int samp_rate, bool verbose);
RcppExport SEXP _AGread_parse_IMU_C(SEXP imu_recordsSEXP, SEXP logSEXP, SEXP infoSEXP, SEXP idSEXP, SEXP samp_rateSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type imu_records(imu_recordsSEXP);
    Rcpp::traits::input_parameter< RawVector >::type log(logSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type info(infoSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< int >::type samp_rate(samp_rateSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_IMU_C(imu_records, log, info, id, samp_rate, verbose));
    return rcpp_result_gen;
END_RCPP
}
// zero2one
NumericVector zero2one(NumericVector samples);
RcppExport SEXP _AGread_zero2one(SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(zero2one(samples));
    return rcpp_result_gen;
END_RCPP
}
// interval_match
int interval_match(double proportion, NumericVector references);
RcppExport SEXP _AGread_interval_match(SEXP proportionSEXP, SEXP referencesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type proportion(proportionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type references(referencesSEXP);
    rcpp_result_gen = Rcpp::wrap(interval_match(proportion, references));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_C
NumericVector interpolate_C(NumericVector original_samples, int target_frequency);
RcppExport SEXP _AGread_interpolate_C(SEXP original_samplesSEXP, SEXP target_frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type original_samples(original_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type target_frequency(target_frequencySEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_C(original_samples, target_frequency));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_IMU
NumericVector interpolate_IMU(NumericVector original_samples, int target_frequency);
RcppExport SEXP _AGread_interpolate_IMU(SEXP original_samplesSEXP, SEXP target_frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type original_samples(original_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type target_frequency(target_frequencySEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_IMU(original_samples, target_frequency));
    return rcpp_result_gen;
END_RCPP
}
// check_id
void check_id(RawVector x, int id);
RcppExport SEXP _AGread_check_id(SEXP xSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    check_id(x, id);
    return R_NilValue;
END_RCPP
}
// imu_df
DataFrame imu_df(List input);
RcppExport SEXP _AGread_imu_df(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(imu_df(input));
    return rcpp_result_gen;
END_RCPP
}
// payload_parse_sensor_data_25C
DataFrame payload_parse_sensor_data_25C(RawVector payload, DataFrame info, int id, int samp_rate);
RcppExport SEXP _AGread_payload_parse_sensor_data_25C(SEXP payloadSEXP, SEXP infoSEXP, SEXP idSEXP, SEXP samp_rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type info(infoSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< int >::type samp_rate(samp_rateSEXP);
    rcpp_result_gen = Rcpp::wrap(payload_parse_sensor_data_25C(payload, info, id, samp_rate));
    return rcpp_result_gen;
END_RCPP
}
// payload_parse_activity2_26C
DataFrame payload_parse_activity2_26C(RawVector payload, int samp_rate, int scale_factor, bool is_last_packet);
RcppExport SEXP _AGread_payload_parse_activity2_26C(SEXP payloadSEXP, SEXP samp_rateSEXP, SEXP scale_factorSEXP, SEXP is_last_packetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< int >::type samp_rate(samp_rateSEXP);
    Rcpp::traits::input_parameter< int >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< bool >::type is_last_packet(is_last_packetSEXP);
    rcpp_result_gen = Rcpp::wrap(payload_parse_activity2_26C(payload, samp_rate, scale_factor, is_last_packet));
    return rcpp_result_gen;
END_RCPP
}
// parse_primary_accelerometerC
List parse_primary_accelerometerC(DataFrame primary_records, RawVector log, int scale_factor, int samp_rate, bool verbose);
RcppExport SEXP _AGread_parse_primary_accelerometerC(SEXP primary_recordsSEXP, SEXP logSEXP, SEXP scale_factorSEXP, SEXP samp_rateSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type primary_records(primary_recordsSEXP);
    Rcpp::traits::input_parameter< RawVector >::type log(logSEXP);
    Rcpp::traits::input_parameter< int >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< int >::type samp_rate(samp_rateSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_primary_accelerometerC(primary_records, log, scale_factor, samp_rate, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_AGread_get_headersC", (DL_FUNC) &_AGread_get_headersC, 1},
    {"_AGread_latch_accel", (DL_FUNC) &_AGread_latch_accel, 3},
    {"_AGread_get_latch_index", (DL_FUNC) &_AGread_get_latch_index, 2},
    {"_AGread_get_latch_values", (DL_FUNC) &_AGread_get_latch_values, 2},
    {"_AGread_get_latch_entries", (DL_FUNC) &_AGread_get_latch_entries, 6},
    {"_AGread_latch_replicate", (DL_FUNC) &_AGread_latch_replicate, 5},
    {"_AGread_get_short", (DL_FUNC) &_AGread_get_short, 4},
    {"_AGread_mid_round", (DL_FUNC) &_AGread_mid_round, 2},
    {"_AGread_print_progC", (DL_FUNC) &_AGread_print_progC, 2},
    {"_AGread_checksumC", (DL_FUNC) &_AGread_checksumC, 3},
    {"_AGread_parse_IMU_C", (DL_FUNC) &_AGread_parse_IMU_C, 6},
    {"_AGread_zero2one", (DL_FUNC) &_AGread_zero2one, 1},
    {"_AGread_interval_match", (DL_FUNC) &_AGread_interval_match, 2},
    {"_AGread_interpolate_C", (DL_FUNC) &_AGread_interpolate_C, 2},
    {"_AGread_interpolate_IMU", (DL_FUNC) &_AGread_interpolate_IMU, 2},
    {"_AGread_check_id", (DL_FUNC) &_AGread_check_id, 2},
    {"_AGread_imu_df", (DL_FUNC) &_AGread_imu_df, 1},
    {"_AGread_payload_parse_sensor_data_25C", (DL_FUNC) &_AGread_payload_parse_sensor_data_25C, 4},
    {"_AGread_payload_parse_activity2_26C", (DL_FUNC) &_AGread_payload_parse_activity2_26C, 4},
    {"_AGread_parse_primary_accelerometerC", (DL_FUNC) &_AGread_parse_primary_accelerometerC, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_AGread(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
