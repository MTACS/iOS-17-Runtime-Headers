
@protocol WFDrawerPaneContainerDelegate <NSObject>

@required

- (double)bottomInsetForPaneContainer:(WFDrawerPaneContainer *)arg1;
- (void)drawerPaneContainer:(WFDrawerPaneContainer *)arg1 didTransitionToVisibility:(unsigned long long)arg2;
- (void)drawerPaneContainer:(WFDrawerPaneContainer *)arg1 willTransitionToVisibility:(unsigned long long)arg2;
- (UIScrollView *)scrollViewOccludingDrawerPaneInsideContainer:(WFDrawerPaneContainer *)arg1;
- (double)topInsetForPaneContainer:(WFDrawerPaneContainer *)arg1;

@end
