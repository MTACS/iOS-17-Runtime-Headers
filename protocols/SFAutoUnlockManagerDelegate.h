
@protocol SFAutoUnlockManagerDelegate <NSObject>

@optional

- (void)manager:(SFAutoUnlockManager *)arg1 beganAttemptWithDevice:(SFAutoUnlockDevice *)arg2;
- (void)manager:(SFAutoUnlockManager *)arg1 completedUnlockWithDevice:(SFAutoUnlockDevice *)arg2;
- (void)manager:(SFAutoUnlockManager *)arg1 deviceRequestedRelock:(SFAutoUnlockDevice *)arg2;
- (void)manager:(SFAutoUnlockManager *)arg1 didEnableDevice:(SFAutoUnlockDevice *)arg2;
- (void)manager:(SFAutoUnlockManager *)arg1 enablingLockedDevice:(SFAutoUnlockDevice *)arg2;
- (void)manager:(SFAutoUnlockManager *)arg1 failedAttemptWithError:(NSError *)arg2;
- (void)manager:(SFAutoUnlockManager *)arg1 failedToEnableDevice:(SFAutoUnlockDevice *)arg2 error:(NSError *)arg3;

@end
