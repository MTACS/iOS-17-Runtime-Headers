
@protocol ICNestedScrollable

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })adjustedContentInset;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInContainingScrollView;
- (bool)isLocked;
- (bool)isZoomed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollBounds;
- (UIScrollView *)scrollView;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
