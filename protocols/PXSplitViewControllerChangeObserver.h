
@protocol PXSplitViewControllerChangeObserver <NSObject>

@optional

- (void)splitViewController:(PXSplitViewController *)arg1 didChangeSidebarVisibility:(bool)arg2;
- (void)splitViewController:(PXSplitViewController *)arg1 willChangeSidebarVisibility:(bool)arg2;
- (void)splitViewControllerWillExpand:(PXSplitViewController *)arg1;

@end
