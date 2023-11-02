
@protocol SKUIScrollingTabBarControllerItemContextDelegate <NSObject>

@optional

- (void)scrollingTabBarControllerItemContext:(SKUIScrollingTabBarControllerItemContext *)arg1 observedNavigationStackDidChange:(id <SKUIObservableNavigationStack>)arg2;
- (void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(SKUIScrollingTabBarControllerItemContext *)arg1;
- (void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(SKUIScrollingTabBarControllerItemContext *)arg1;

@end
