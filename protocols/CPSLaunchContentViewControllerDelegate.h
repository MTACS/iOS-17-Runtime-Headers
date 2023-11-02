
@protocol CPSLaunchContentViewControllerDelegate <NSObject>

@optional

- (void)launchContentViewController:(CPSLaunchContentViewController *)arg1 didTapCloseButton:(bool)arg2;
- (void)launchContentViewControllerDidDisappear:(CPSLaunchContentViewController *)arg1 didOpenClip:(bool)arg2;

@end
