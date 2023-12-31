
@interface BBBiometricResource : NSObject {
    bool  _hasEnrolledPearlIdentities;
    bool  _isBiometricUnlockAllowed;
    bool  _isPasscodeSet;
    BKDevice * _pearlDevice;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool hasPearlCapability;
@property (nonatomic, readonly) bool isPearlEnabledAndEnrolled;

- (void).cxx_destruct;
- (void)_registerForBKEnrollmentChange;
- (void)_registerForBiometricUnlockAllowedChange;
- (void)_registerForPasscodeChange;
- (void)_unregisterForBKEnrollmentChange;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void)_updateHasEnrolledPearlIdentities;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_updateIsPasscodeSet;
- (void)dealloc;
- (bool)hasPearlCapability;
- (id)initWithQueue:(id)arg1;
- (bool)isPearlEnabledAndEnrolled;

@end
