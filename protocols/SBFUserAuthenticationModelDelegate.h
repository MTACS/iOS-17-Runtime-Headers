
@protocol SBFUserAuthenticationModelDelegate <NSObject>

@required

- (void)deviceLockModelRequestsDeviceWipe:(id <SBFUserAuthenticationModel>)arg1;
- (void)deviceLockStateMayHaveChangedForModel:(id <SBFUserAuthenticationModel>)arg1;

@end
