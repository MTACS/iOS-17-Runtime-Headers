
@protocol PKHorizontalScrollingFooterViewProtocol <NSObject>

@required

- (UIView<PKHorizontalScrollingFooterViewComparator> *)currentFooter;
- (UIView<PKHorizontalScrollingFooterViewComparator> *)nextFooter;
- (void)setCurrentFooter:(UIView<PKHorizontalScrollingFooterViewComparator> *)arg1;
- (void)setNextFooter:(UIView<PKHorizontalScrollingFooterViewComparator> *)arg1;
- (void)setTransitionProgress:(double)arg1;

@end
