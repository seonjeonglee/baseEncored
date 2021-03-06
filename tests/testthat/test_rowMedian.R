context("Test rowMedian")

test_that("Convert human date to time class with selected timezone",
          code = {
            medianColumn <- 0:100
            testDataFrame <-
              data.frame(medianColumn - 2,
                         medianColumn - 1,
                         medianColumn,
                         medianColumn + 1,
                         medianColumn + 2)
            expect_equal(rowMedian(testDataFrame),
                         medianColumn)
          })
