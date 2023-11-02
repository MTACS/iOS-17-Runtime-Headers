
@protocol SBIconViewObserver <NSObject>

@optional

- (void)iconView:(SBIconView *)arg1 didChangeCustomImageViewController:(UIViewController<SBIconViewCustomImageViewControlling> *)arg2;
- (void)iconView:(SBIconView *)arg1 willCancelDragForItem:(UIDragItem *)arg2;
- (void)iconViewDidBecomeWindowless:(SBIconView *)arg1;
- (void)iconViewDidEndDrag:(SBIconView *)arg1;
- (void)iconViewDidHandleTap:(SBIconView *)arg1;
- (void)iconViewSizeDidChange:(SBIconView *)arg1;
- (void)iconViewWasDiscarded:(SBIconView *)arg1;
- (void)iconViewWasRecycled:(SBIconView *)arg1;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1;

@end
