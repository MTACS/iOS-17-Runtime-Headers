
@protocol SKUIScrollingSegmentedControllerDelegate <NSObject>

@optional

- (void)scrollingSegmentedController:(SKUIScrollingSegmentedController *)arg1 contentScrollViewDidChangeForViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(SKUIScrollingSegmentedController *)arg1 didEndDisplayingViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(SKUIScrollingSegmentedController *)arg1 didFocusViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(SKUIScrollingSegmentedController *)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedControllerDidEndDecelerating:(SKUIScrollingSegmentedController *)arg1;
- (void)scrollingSegmentedControllerDidEndDragging:(SKUIScrollingSegmentedController *)arg1 willDecelerate:(bool)arg2;
- (void)scrollingSegmentedControllerWillBeginDecelerating:(SKUIScrollingSegmentedController *)arg1;
- (void)scrollingSegmentedControllerWillBeginDragging:(SKUIScrollingSegmentedController *)arg1;

@end
