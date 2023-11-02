
@protocol PXGridPresentationBarsUpdateDelegate <NSObject>

@optional

- (void)viewController:(UIViewController *)arg1 didUpdateBarsAnimated:(bool)arg2 isSelecting:(bool)arg3;
- (void)viewControllerDidUpdateNavigationItemAppearance:(UIViewController *)arg1;

@end
