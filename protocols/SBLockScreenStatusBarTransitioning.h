
@protocol SBLockScreenStatusBarTransitioning <NSObject>

@required

- (bool)shouldShowLockStatusBarTime;
- (void)updateStatusBarForLockScreenComeback;
- (void)updateStatusBarForLockScreenTeardown;

@end
