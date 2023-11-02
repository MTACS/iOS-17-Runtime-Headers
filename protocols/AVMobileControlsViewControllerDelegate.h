
@protocol AVMobileControlsViewControllerDelegate <NSObject>

@optional

- (void)controlsViewController:(AVMobileControlsViewController *)arg1 didBeginUpdatingVisibleControlsTo:(unsigned long long)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
- (NSString *)controlsViewController:(AVMobileControlsViewController *)arg1 displayNameForMediaSelectionOption:(AVMediaSelectionOption *)arg2;
- (void)controlsViewController:(AVMobileControlsViewController *)arg1 willBeginUpdatingVisibleControlsTo:(unsigned long long)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
- (void)controlsViewControllerDidUpdateLayoutGuides:(AVMobileControlsViewController *)arg1;

@end
