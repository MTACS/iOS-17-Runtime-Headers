
@protocol SUUIScrollingTabBarControllerItemContextDelegate <NSObject>

@optional

- (void)scrollingTabBarControllerItemContext:(SUUIScrollingTabBarControllerItemContext *)arg1 observedNavigationStackDidChange:(id <SUUIObservableNavigationStack>)arg2;
- (void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(SUUIScrollingTabBarControllerItemContext *)arg1;
- (void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(SUUIScrollingTabBarControllerItemContext *)arg1;

@end
