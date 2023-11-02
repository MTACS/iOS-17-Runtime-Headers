
@protocol PKHorizontalScrollingChildViewControllerProtocol <NSObject>

@required

- (double)alphaTransition;
- (UICollectionView *)collectionView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (long long)contentInsetAdjustmentBehavior;
- (id)data;
- (UIView<PKHorizontalScrollingFooterViewComparator> *)footer;
- (UIGestureRecognizer *)gestureRecognizerRequiredToFail;
- (<PKHorizontalScrollingViewControllerDelegate> *)scrollingDelegate;
- (void)setAlphaTransition:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setData:(id)arg1 swap:(bool)arg2;
- (void)setGestureRecognizerRequiredToFail:(UIGestureRecognizer *)arg1;
- (void)setScrollingDelegate:(id <PKHorizontalScrollingViewControllerDelegate>)arg1;
- (void)setVisible:(bool)arg1;
- (bool)visible;

@end
