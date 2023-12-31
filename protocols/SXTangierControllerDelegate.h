
@protocol SXTangierControllerDelegate <NSObject>

@optional

- (void)tangierController:(SXTangierController *)arg1 scrollViewDidEndDragging:(SXScrollView *)arg2 willDecelerate:(bool)arg3;
- (void)tangierController:(SXTangierController *)arg1 scrollViewWillBeginDragging:(SXScrollView *)arg2;
- (void)tangierController:(SXTangierController *)arg1 scrollViewWillEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (void)tangierControllerDidScroll:(SXTangierController *)arg1;
- (void)tangierControllerDidStopScrolling:(SXTangierController *)arg1;
- (void)tangierControllerWillStartScrolling:(SXTangierController *)arg1;

@end
