
@protocol SFUnlockClientProtocol <NSObject>

@required

- (void)beganAttemptWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)completedAuthenticationSessionWithID:(NSUUID *)arg1;
- (void)completedUnlockWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)enabledAuthenticationSessionWithID:(NSUUID *)arg1;
- (void)enabledDevice:(SFAutoUnlockDevice *)arg1;
- (void)failedAuthenticationSessionWithID:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)failedToEnableDevice:(SFAutoUnlockDevice *)arg1 error:(NSError *)arg2;
- (void)failedToEnableDeviceForSessionID:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)failedUnlockWithError:(NSError *)arg1;
- (void)keyDeviceLocked:(SFAutoUnlockDevice *)arg1;
- (void)startedAuthenticationSessionWithID:(NSUUID *)arg1;

@end
