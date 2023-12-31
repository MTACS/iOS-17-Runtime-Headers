
@protocol UIScrollAccessory

@required

- (long long)edge;
- (bool)overlay;
- (UIScrollView *)scrollView;
- (void)setEdge:(long long)arg1;
- (void)setScrollView:(UIScrollView *)arg1;
- (void)update;

@end
