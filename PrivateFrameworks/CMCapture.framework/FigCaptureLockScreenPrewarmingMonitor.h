
@interface FigCaptureLockScreenPrewarmingMonitor : NSObject <FigCaptureDisplayLayoutObserver> {
    int  _activeBiometricOperationChangedToken;
    int  _activeBiometricOperationType;
    bool  _addingLayoutObserver;
    int  _biometricEnrollmentChangedToken;
    NSObject<OS_dispatch_source> * _delayedPrewarmTimer;
    int  _deviceLockState;
    int  _deviceLockStateChangedToken;
    bool  _haveEnrolledBiometricIdentities;
    bool  _isPrewarming;
    long long  _lastBiometricMatchCompleteTime;
    long long  _lastDeviceUnlockTime;
    NSDictionary * _mobileKeyBagOptions;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    bool  _observingLayoutChanges;
    bool  _onLockScreen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)start;
+ (void)stop;

- (void)dealloc;
- (void)layoutMonitor:(id)arg1 didUpdateLayout:(id)arg2;

@end
