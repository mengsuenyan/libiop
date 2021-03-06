#include <gtest/gtest.h>

#include "libiop/algebra/fields/gf64.hpp"

namespace libiop {

gf64 gf64_mul(const uint64_t &a_val, const uint64_t &b_val)
{
    return gf64(a_val) * gf64(b_val);
}

/* test cases generated by sage/gf64.sage script */

TEST(MultiplicationTest, SageTests) {
    EXPECT_EQ(gf64_mul(0x4c12835baf9995cbLL, 0x47d58182494cccf7LL), gf64(0xcd8d885948717796LL));
    EXPECT_EQ(gf64_mul(0x1dc6cb1e00f6c1e7LL, 0xc975aa5081fe4a5fLL), gf64(0x68a12cd69de5ba13LL));
    EXPECT_EQ(gf64_mul(0x701eca016903f854LL, 0x1bff27de896d5a63LL), gf64(0x3f2b03920fe6f850LL));
    EXPECT_EQ(gf64_mul(0x84949f71b013dafdLL, 0xc8642090f94902a6LL), gf64(0x0260be4b638467b4LL));
    EXPECT_EQ(gf64_mul(0x415405db8945dfb1LL, 0xe45f3b3b4fafbbfdLL), gf64(0xeedd9f3f9a790308LL));
    EXPECT_EQ(gf64_mul(0x4556f8aac66f427fLL, 0xb1d2219b0266de02LL), gf64(0xbdfd1cb2a183fd56LL));
    EXPECT_EQ(gf64_mul(0x3dddbcee3039f5fcLL, 0xfc9de0af7ec40b3fLL), gf64(0xab78b6d459d0d7a9LL));
    EXPECT_EQ(gf64_mul(0xc63a3ae27b186b00LL, 0x7218e0e28cba2badLL), gf64(0x7cc11d40edaf1d46LL));
    EXPECT_EQ(gf64_mul(0xbfe1ca4a7ccb135fLL, 0x6cbf9a222a7f80a7LL), gf64(0x6afbe201c18d9334LL));
    EXPECT_EQ(gf64_mul(0x38567cdad827aacfLL, 0xfa309c33b717dd13LL), gf64(0xc2db83d1400e7d58LL));
}

TEST(InverseTest, SimpleTest) {
    for (std::size_t i = 0; i < 10; i++) {
        const gf64 a = gf64::random_element();
        const gf64 a_inv = a.inverse();

        EXPECT_EQ(a*a_inv, gf64(1));
    }
}

}
