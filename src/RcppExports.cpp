// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// weighted_probs
NumericMatrix weighted_probs(const List& data_lst, const NumericVector& weights);
RcppExport SEXP _sits_weighted_probs(SEXP data_lstSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type data_lst(data_lstSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_probs(data_lst, weights));
    return rcpp_result_gen;
END_RCPP
}
// weighted_uncert_probs
NumericMatrix weighted_uncert_probs(const List& data_lst, const List& unc_lst);
RcppExport SEXP _sits_weighted_uncert_probs(SEXP data_lstSEXP, SEXP unc_lstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type data_lst(data_lstSEXP);
    Rcpp::traits::input_parameter< const List& >::type unc_lst(unc_lstSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_uncert_probs(data_lst, unc_lst));
    return rcpp_result_gen;
END_RCPP
}
// C_kernel_median
NumericVector C_kernel_median(const NumericMatrix& x, int ncols, int nrows, int band, int window_size);
RcppExport SEXP _sits_C_kernel_median(SEXP xSEXP, SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP bandSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_kernel_median(x, ncols, nrows, band, window_size));
    return rcpp_result_gen;
END_RCPP
}
// C_kernel_mean
NumericVector C_kernel_mean(const NumericMatrix& x, int ncols, int nrows, int band, int window_size);
RcppExport SEXP _sits_C_kernel_mean(SEXP xSEXP, SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP bandSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_kernel_mean(x, ncols, nrows, band, window_size));
    return rcpp_result_gen;
END_RCPP
}
// C_kernel_sd
NumericVector C_kernel_sd(const NumericMatrix& x, int ncols, int nrows, int band, int window_size);
RcppExport SEXP _sits_C_kernel_sd(SEXP xSEXP, SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP bandSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_kernel_sd(x, ncols, nrows, band, window_size));
    return rcpp_result_gen;
END_RCPP
}
// C_kernel_min
NumericVector C_kernel_min(const NumericMatrix& x, int ncols, int nrows, int band, int window_size);
RcppExport SEXP _sits_C_kernel_min(SEXP xSEXP, SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP bandSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_kernel_min(x, ncols, nrows, band, window_size));
    return rcpp_result_gen;
END_RCPP
}
// C_kernel_max
NumericVector C_kernel_max(const NumericMatrix& x, int ncols, int nrows, int band, int window_size);
RcppExport SEXP _sits_C_kernel_max(SEXP xSEXP, SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP bandSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_kernel_max(x, ncols, nrows, band, window_size));
    return rcpp_result_gen;
END_RCPP
}
// C_kernel_var
NumericVector C_kernel_var(const NumericMatrix& x, int ncols, int nrows, int band, int window_size);
RcppExport SEXP _sits_C_kernel_var(SEXP xSEXP, SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP bandSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_kernel_var(x, ncols, nrows, band, window_size));
    return rcpp_result_gen;
END_RCPP
}
// C_kernel_modal
NumericVector C_kernel_modal(const NumericMatrix& x, int ncols, int nrows, int band, int window_size);
RcppExport SEXP _sits_C_kernel_modal(SEXP xSEXP, SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP bandSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_kernel_modal(x, ncols, nrows, band, window_size));
    return rcpp_result_gen;
END_RCPP
}
// C_label_max_prob
arma::colvec C_label_max_prob(const arma::mat& x);
RcppExport SEXP _sits_C_label_max_prob(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_label_max_prob(x));
    return rcpp_result_gen;
END_RCPP
}
// linear_interp
NumericMatrix linear_interp(NumericMatrix& mtx);
RcppExport SEXP _sits_linear_interp(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(linear_interp(mtx));
    return rcpp_result_gen;
END_RCPP
}
// linear_interp_vec
NumericVector linear_interp_vec(NumericVector& vec);
RcppExport SEXP _sits_linear_interp_vec(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(linear_interp_vec(vec));
    return rcpp_result_gen;
END_RCPP
}
// C_mask_na
LogicalVector C_mask_na(const NumericMatrix& x);
RcppExport SEXP _sits_C_mask_na(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_mask_na(x));
    return rcpp_result_gen;
END_RCPP
}
// C_fill_na
NumericMatrix C_fill_na(const NumericMatrix& x, double fill);
RcppExport SEXP _sits_C_fill_na(SEXP xSEXP, SEXP fillSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type fill(fillSEXP);
    rcpp_result_gen = Rcpp::wrap(C_fill_na(x, fill));
    return rcpp_result_gen;
END_RCPP
}
// batch_calc
arma::mat batch_calc(const int& n_pixels, const int& max_lines_per_batch);
RcppExport SEXP _sits_batch_calc(SEXP n_pixelsSEXP, SEXP max_lines_per_batchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n_pixels(n_pixelsSEXP);
    Rcpp::traits::input_parameter< const int& >::type max_lines_per_batch(max_lines_per_batchSEXP);
    rcpp_result_gen = Rcpp::wrap(batch_calc(n_pixels, max_lines_per_batch));
    return rcpp_result_gen;
END_RCPP
}
// C_nnls_solver_batch
arma::mat C_nnls_solver_batch(const arma::mat& x, const arma::mat& em, const bool rmse, const int max_it, const float tol);
RcppExport SEXP _sits_C_nnls_solver_batch(SEXP xSEXP, SEXP emSEXP, SEXP rmseSEXP, SEXP max_itSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type em(emSEXP);
    Rcpp::traits::input_parameter< const bool >::type rmse(rmseSEXP);
    Rcpp::traits::input_parameter< const int >::type max_it(max_itSEXP);
    Rcpp::traits::input_parameter< const float >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(C_nnls_solver_batch(x, em, rmse, max_it, tol));
    return rcpp_result_gen;
END_RCPP
}
// C_normalize_data
arma::mat C_normalize_data(const arma::mat& data, const arma::rowvec& min, const arma::rowvec& max);
RcppExport SEXP _sits_C_normalize_data(SEXP dataSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type min(minSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_normalize_data(data, min, max));
    return rcpp_result_gen;
END_RCPP
}
// C_normalize_data_0
NumericMatrix C_normalize_data_0(const NumericMatrix& data, const double& min, const double& max);
RcppExport SEXP _sits_C_normalize_data_0(SEXP dataSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type min(minSEXP);
    Rcpp::traits::input_parameter< const double& >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_normalize_data_0(data, min, max));
    return rcpp_result_gen;
END_RCPP
}
// sample_points
NumericMatrix sample_points(const NumericMatrix& polymatrix, const int n_sam_pol);
RcppExport SEXP _sits_sample_points(SEXP polymatrixSEXP, SEXP n_sam_polSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type polymatrix(polymatrixSEXP);
    Rcpp::traits::input_parameter< const int >::type n_sam_pol(n_sam_polSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_points(polymatrix, n_sam_pol));
    return rcpp_result_gen;
END_RCPP
}
// C_max_sampling
DataFrame C_max_sampling(const NumericVector& x, int nrows, int ncols, int window_size);
RcppExport SEXP _sits_C_max_sampling(SEXP xSEXP, SEXP nrowsSEXP, SEXP ncolsSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_max_sampling(x, nrows, ncols, window_size));
    return rcpp_result_gen;
END_RCPP
}
// bayes_smoother
arma::mat bayes_smoother(const arma::mat& m, const arma::uword m_nrow, const arma::uword m_ncol, const arma::mat& w, const arma::mat& sigma, const double neigh_fraction);
RcppExport SEXP _sits_bayes_smoother(SEXP mSEXP, SEXP m_nrowSEXP, SEXP m_ncolSEXP, SEXP wSEXP, SEXP sigmaSEXP, SEXP neigh_fractionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_nrow(m_nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_ncol(m_ncolSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double >::type neigh_fraction(neigh_fractionSEXP);
    rcpp_result_gen = Rcpp::wrap(bayes_smoother(m, m_nrow, m_ncol, w, sigma, neigh_fraction));
    return rcpp_result_gen;
END_RCPP
}
// bayes_var
arma::mat bayes_var(const arma::mat& m, const arma::uword m_nrow, const arma::uword m_ncol, const arma::mat& w, const double neigh_fraction);
RcppExport SEXP _sits_bayes_var(SEXP mSEXP, SEXP m_nrowSEXP, SEXP m_ncolSEXP, SEXP wSEXP, SEXP neigh_fractionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_nrow(m_nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_ncol(m_ncolSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double >::type neigh_fraction(neigh_fractionSEXP);
    rcpp_result_gen = Rcpp::wrap(bayes_var(m, m_nrow, m_ncol, w, neigh_fraction));
    return rcpp_result_gen;
END_RCPP
}
// bayes_smoother_fraction
NumericVector bayes_smoother_fraction(const NumericMatrix& logits, const int& nrows, const int& ncols, const int& window_size, const NumericVector& smoothness, const double& neigh_fraction);
RcppExport SEXP _sits_bayes_smoother_fraction(SEXP logitsSEXP, SEXP nrowsSEXP, SEXP ncolsSEXP, SEXP window_sizeSEXP, SEXP smoothnessSEXP, SEXP neigh_fractionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type logits(logitsSEXP);
    Rcpp::traits::input_parameter< const int& >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< const int& >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int& >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type smoothness(smoothnessSEXP);
    Rcpp::traits::input_parameter< const double& >::type neigh_fraction(neigh_fractionSEXP);
    rcpp_result_gen = Rcpp::wrap(bayes_smoother_fraction(logits, nrows, ncols, window_size, smoothness, neigh_fraction));
    return rcpp_result_gen;
END_RCPP
}
// smooth_sg
arma::vec smooth_sg(const arma::vec& data, const arma::mat& f_res, const int& p, const int& n);
RcppExport SEXP _sits_smooth_sg(SEXP dataSEXP, SEXP f_resSEXP, SEXP pSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type f_res(f_resSEXP);
    Rcpp::traits::input_parameter< const int& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_sg(data, f_res, p, n));
    return rcpp_result_gen;
END_RCPP
}
// smooth_sg_mtx
arma::mat smooth_sg_mtx(const arma::mat& data, const arma::mat& f_res, const int& p, const int& n);
RcppExport SEXP _sits_smooth_sg_mtx(SEXP dataSEXP, SEXP f_resSEXP, SEXP pSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type f_res(f_resSEXP);
    Rcpp::traits::input_parameter< const int& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_sg_mtx(data, f_res, p, n));
    return rcpp_result_gen;
END_RCPP
}
// smooth_whit
NumericVector smooth_whit(const NumericVector& data, const double& lambda, const int& length);
RcppExport SEXP _sits_smooth_whit(SEXP dataSEXP, SEXP lambdaSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int& >::type length(lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_whit(data, lambda, length));
    return rcpp_result_gen;
END_RCPP
}
// smooth_whit_mtx
NumericMatrix smooth_whit_mtx(const NumericMatrix& data, const double& lambda, const int& length);
RcppExport SEXP _sits_smooth_whit_mtx(SEXP dataSEXP, SEXP lambdaSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int& >::type length(lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_whit_mtx(data, lambda, length));
    return rcpp_result_gen;
END_RCPP
}
// C_entropy_probs
arma::mat C_entropy_probs(const arma::mat& x);
RcppExport SEXP _sits_C_entropy_probs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_entropy_probs(x));
    return rcpp_result_gen;
END_RCPP
}
// C_margin_probs
arma::mat C_margin_probs(const arma::mat& x);
RcppExport SEXP _sits_C_margin_probs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_margin_probs(x));
    return rcpp_result_gen;
END_RCPP
}
// C_least_probs
arma::mat C_least_probs(const arma::mat& x);
RcppExport SEXP _sits_C_least_probs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_least_probs(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sits_weighted_probs", (DL_FUNC) &_sits_weighted_probs, 2},
    {"_sits_weighted_uncert_probs", (DL_FUNC) &_sits_weighted_uncert_probs, 2},
    {"_sits_C_kernel_median", (DL_FUNC) &_sits_C_kernel_median, 5},
    {"_sits_C_kernel_mean", (DL_FUNC) &_sits_C_kernel_mean, 5},
    {"_sits_C_kernel_sd", (DL_FUNC) &_sits_C_kernel_sd, 5},
    {"_sits_C_kernel_min", (DL_FUNC) &_sits_C_kernel_min, 5},
    {"_sits_C_kernel_max", (DL_FUNC) &_sits_C_kernel_max, 5},
    {"_sits_C_kernel_var", (DL_FUNC) &_sits_C_kernel_var, 5},
    {"_sits_C_kernel_modal", (DL_FUNC) &_sits_C_kernel_modal, 5},
    {"_sits_C_label_max_prob", (DL_FUNC) &_sits_C_label_max_prob, 1},
    {"_sits_linear_interp", (DL_FUNC) &_sits_linear_interp, 1},
    {"_sits_linear_interp_vec", (DL_FUNC) &_sits_linear_interp_vec, 1},
    {"_sits_C_mask_na", (DL_FUNC) &_sits_C_mask_na, 1},
    {"_sits_C_fill_na", (DL_FUNC) &_sits_C_fill_na, 2},
    {"_sits_batch_calc", (DL_FUNC) &_sits_batch_calc, 2},
    {"_sits_C_nnls_solver_batch", (DL_FUNC) &_sits_C_nnls_solver_batch, 5},
    {"_sits_C_normalize_data", (DL_FUNC) &_sits_C_normalize_data, 3},
    {"_sits_C_normalize_data_0", (DL_FUNC) &_sits_C_normalize_data_0, 3},
    {"_sits_sample_points", (DL_FUNC) &_sits_sample_points, 2},
    {"_sits_C_max_sampling", (DL_FUNC) &_sits_C_max_sampling, 4},
    {"_sits_bayes_smoother", (DL_FUNC) &_sits_bayes_smoother, 6},
    {"_sits_bayes_var", (DL_FUNC) &_sits_bayes_var, 5},
    {"_sits_bayes_smoother_fraction", (DL_FUNC) &_sits_bayes_smoother_fraction, 6},
    {"_sits_smooth_sg", (DL_FUNC) &_sits_smooth_sg, 4},
    {"_sits_smooth_sg_mtx", (DL_FUNC) &_sits_smooth_sg_mtx, 4},
    {"_sits_smooth_whit", (DL_FUNC) &_sits_smooth_whit, 3},
    {"_sits_smooth_whit_mtx", (DL_FUNC) &_sits_smooth_whit_mtx, 3},
    {"_sits_C_entropy_probs", (DL_FUNC) &_sits_C_entropy_probs, 1},
    {"_sits_C_margin_probs", (DL_FUNC) &_sits_C_margin_probs, 1},
    {"_sits_C_least_probs", (DL_FUNC) &_sits_C_least_probs, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_sits(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
