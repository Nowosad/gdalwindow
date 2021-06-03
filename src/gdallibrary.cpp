#include <Rcpp.h>
#include "gdallibrary/gdallibrary.h"

using namespace Rcpp;

// [[Rcpp::export]]
LogicalVector register_gdal_cpp() {
  gdallibrary::gdal_register_all();

  LogicalVector out(1);
  out[0] = true;
  return out;
}

// [[Rcpp::export]]
List raster_io_gdal_cpp(CharacterVector dsn,
                        IntegerVector window,
                        IntegerVector band,
                        CharacterVector resample) {
  return gdallibrary::gdal_raster_io(dsn, window, band, resample);
}
