// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// vectorizedMedian
NumericVector vectorizedMedian(NumericVector x, int chunkSize);
RcppExport SEXP baseEncored_vectorizedMedian(SEXP xSEXP, SEXP chunkSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type chunkSize(chunkSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(vectorizedMedian(x, chunkSize));
    return rcpp_result_gen;
END_RCPP
}
