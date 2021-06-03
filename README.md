
<!-- README.md is generated from README.Rmd. Please edit that file -->

# gdalwindow

<!-- badges: start -->
<!-- badges: end -->

The goal of gdalwindow is to …

## Installation

You can install the released version of gdalwindow from
[CRAN](https://CRAN.R-project.org) with:

``` r
install.packages("gdalwindow")
```

And the development version from [GitHub](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("Nowosad/gdalwindow")
```

## Example

This is a basic example which shows you how to solve a common problem:

``` r
library(gdalwindow)
## basic example code
```

``` r
gdalwindow:::raster_io_gdal_cpp(system.file("raster/landsat.tif", package = "spDataLarge"), 
                                c(0, 0, 10, 10, 5, 5), band = 1, resample = "")
#> [[1]]
#>  [1] 10283 10347  9578  9382  9398  9472 10549 10451 10309  9741  9630 10430
#> [13] 10623 10546 10540  9669 10536  9751 10264 10411  9436  9604  9377  9585
#> [25]  9695
```
