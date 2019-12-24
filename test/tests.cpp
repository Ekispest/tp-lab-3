TEST(circle,circle_get_area2)
{
    Circle c(10.0);
    EXPECT_DOUBLE_EQ(314.15926535897933,c.getArea());
    }
TEST(circle,circle_get_ference2)
{
    Circle c(10.0);
    EXPECT_DOUBLE_EQ(62.831853071795862,c.getFerence());
}
TEST(date,datetime_gettomorrow1)
{
@@ -59,9 +59,9 @@ TEST(date,datetime_getdiff2)
}
TEST(calc,delta)
{
    EXPECT_DOUBLE_EQ(0.15915494319051504,calcDelta());
}
TEST(calc,pool_cost)
{
    EXPECT_DOUBLE_EQ(72256.531032565224,calcCost());
}