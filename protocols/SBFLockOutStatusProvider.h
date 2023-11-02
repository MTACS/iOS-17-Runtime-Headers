
@protocol SBFLockOutStatusProvider <SBFBlockStatusProvider>

@required

- (bool)isLockedOut;

@end
