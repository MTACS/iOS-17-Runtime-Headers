
@protocol PXGScrollViewContainerDelegate <NSObject>

@optional

- (NSArray *)focusItemsForScrollViewContainer:(PXGScrollViewContainer *)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)scrollViewContainerDidEndScrolling:(PXGScrollViewContainer *)arg1;
- (void)scrollViewContainerDidScroll:(PXGScrollViewContainer *)arg1;
- (void)scrollViewContainerWillBeginScrolling:(PXGScrollViewContainer *)arg1;
- (void)scrollViewContainerWillEndScrolling:(PXGScrollViewContainer *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;

@end
