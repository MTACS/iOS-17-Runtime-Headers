
@protocol AMUIPosterViewControllerDelegate <NSObject>

@required

- (void)posterViewController:(AMUIPosterViewController *)arg1 didRequestInlineAuthenticationWithUnlockDestination:(NSString *)arg2;
- (void)posterViewController:(AMUIPosterViewController *)arg1 relinquishExtensionInstanceIdentifier:(NSUUID *)arg2;
- (void)posterViewController:(AMUIPosterViewController *)arg1 setChromeVisibility:(bool)arg2 withAnimationSettings:(BSAnimationSettings *)arg3 animationFence:(BKSAnimationFenceHandle *)arg4;
- (bool)posterViewControllerHasInlineAuthenticated:(AMUIPosterViewController *)arg1;
- (bool)posterViewControllerIsAuthenticated:(AMUIPosterViewController *)arg1;
- (NSUUID *)posterViewControllerRequestExtensionInstanceIdentifier:(AMUIPosterViewController *)arg1;

@end
