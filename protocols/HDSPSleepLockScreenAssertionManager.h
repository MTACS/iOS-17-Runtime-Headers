
@protocol HDSPSleepLockScreenAssertionManager <NSObject>

@required

- (<HDSPSleepLockScreenAssertionManagerDelegate> *)delegate;
- (bool)hasLockScreenConnection;
- (void)invalidateAssertion;
- (void)sendLockScreenState:(long long)arg1 userInfo:(NSDictionary *)arg2;
- (void)setDelegate:(id <HDSPSleepLockScreenAssertionManagerDelegate>)arg1;
- (void)takeAssertionIfNeeded;

@end
