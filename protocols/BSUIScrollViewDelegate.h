
@protocol BSUIScrollViewDelegate <UIScrollViewDelegate>

@optional

- (void)scrollViewDidEndScrolling:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1 withContext:(struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg2;
- (void)scrollViewWillBeginScrolling:(UIScrollView *)arg1;

@end
