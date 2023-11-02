
@protocol SBLockScreenPluginLifecycleObserver <NSObject>

@required

- (void)didDismissLockScreenPlugin:(SBLockScreenPlugin *)arg1;
- (void)didPresentLockScreenPlugin:(SBLockScreenPlugin *)arg1;
- (void)willDismissLockScreenPlugin:(SBLockScreenPlugin *)arg1;
- (void)willPresentLockScreenPlugin:(SBLockScreenPlugin *)arg1;

@end
