
@protocol SBLockScreenActionProvider <NSObject>

@required

- (SBFLockScreenActionContext *)lockScreenActionContext;

@optional

- (void)invalidateLockScreenActionContext;

@end
