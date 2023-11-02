
@protocol SBCoverSheetSecureAppEnvironmentViewControllerDelegate <NSObject>

@required

- (void)secureAppEnvironmentViewControllerOwnsHomeGestureDidChange;
- (bool)secureAppEnvironmentViewControllerShouldEnableIdleWarning:(SBCoverSheetSecureAppEnvironmentViewController *)arg1 alwaysOnEnabled:(bool)arg2;

@end
