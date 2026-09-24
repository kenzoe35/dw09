#include <gtest/gtest.h>
#include "dw.h"

TEST(FindMinimum, HandlesUnsortedValues) {
    int values[] = {5, 2, 8, 1, 9};
    EXPECT_EQ(find_minimum(values, 5), 1);
}

TEST(FindMinimum, HandlesSingleElement) {
    int values[] = {17};
    EXPECT_EQ(find_minimum(values, 1), 17);
}

TEST(FindMinimum, HandlesAllPositiveValues) {
    int values[] = {10, 20, 5, 30};
    EXPECT_EQ(find_minimum(values, 4), 5);
}
