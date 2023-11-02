
@protocol SUUIScrollingSegmentedControllerDelegate <NSObject>

@optional

- (void)scrollingSegmentedController:(SUUIScrollingSegmentedController *)arg1 contentScrollViewDidChangeForViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(SUUIScrollingSegmentedController *)arg1 didEndDisplayingViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(SUUIScrollingSegmentedController *)arg1 didFocusViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(SUUIScrollingSegmentedController *)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedControllerDidEndDecelerating:(SUUIScrollingSegmentedController *)arg1;
- (void)scrollingSegmentedControllerDidEndDragging:(SUUIScrollingSegmentedController *)arg1 willDecelerate:(bool)arg2;
- (void)scrollingSegmentedControllerWillBeginDecelerating:(SUUIScrollingSegmentedController *)arg1;
- (void)scrollingSegmentedControllerWillBeginDragging:(SUUIScrollingSegmentedController *)arg1;

@end
