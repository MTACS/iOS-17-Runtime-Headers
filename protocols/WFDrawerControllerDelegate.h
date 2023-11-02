
@protocol WFDrawerControllerDelegate <NSObject>

@optional

- (UIScrollView *)dismissingScrollViewForDrawerController:(WFDrawerController *)arg1;
- (void)drawerController:(WFDrawerController *)arg1 didTransitionToVisibility:(unsigned long long)arg2;
- (void)drawerController:(WFDrawerController *)arg1 willTransitionToVisibility:(unsigned long long)arg2;

@end
