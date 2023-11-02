
@interface SBUIPhoneUnlockWithWatchController : NSObject <SBUIBiometricResourceObserver, SFAutoUnlockManagerDelegate> {
    SFAutoUnlockManager * _autoUnlockManager;
    <SBUIBiometricResource> * _biometricResource;
    bool  _bottomFaceOccludedSinceScreenOn;
    <SBUIPhoneUnlockWithWatchControllerDelegate> * _delegate;
    long long  _errorCode;
    bool  _faceOccludedSinceScreenOn;
    bool  _faceWUPoseEligibleSinceScreenOn;
    bool  _liftToWakeGestureDetectedSinceScreenOn;
    NSHashTable * _observers;
    bool  _significantUserInteractionOccuredSinceScreenOn;
    SFAutoUnlockManager * _testAutoUnlockManager;
    bool  _wakeSourceIsUserAction;
}

@property (nonatomic, retain) <SBUIBiometricResource> *biometricResource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPhoneUnlockWithWatchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool liftToWakeGestureDetectedSinceScreenOn;
@property (nonatomic) bool significantUserInteractionOccuredSinceScreenOn;
@property (readonly) Class superclass;
@property (nonatomic) bool wakeSourceIsUserAction;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_autoUnlockManager;
- (void)_handleUnlockAttemptFailedWithError:(id)arg1;
- (void)_handleUnlockAttemptSucceeded;
- (void)_sendCoreAnalyticsEventWithPayload:(id)arg1;
- (id)_testAutoUnlockManager;
- (void)addObserver:(id)arg1;
- (void)attemptPhoneUnlockWithWatch;
- (id)biometricResource;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)completePhoneAutoUnlockWithNotification:(bool)arg1;
- (id)delegate;
- (bool)didDetectFaceRequirementsForPAU;
- (long long)errorCode;
- (void)handleScreenOff;
- (id)init;
- (bool)liftToWakeGestureDetectedSinceScreenOn;
- (void)manager:(id)arg1 beganAttemptWithDevice:(id)arg2;
- (void)manager:(id)arg1 completedUnlockWithDevice:(id)arg2;
- (void)manager:(id)arg1 failedAttemptWithError:(id)arg2;
- (bool)phoneUnlockWithWatchEnabled;
- (bool)phoneUnlockWithWatchSupported;
- (void)removeObserver:(id)arg1;
- (void)setBiometricResource:(id)arg1;
- (void)setBottomFaceOccludedSinceScreenOn:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setFaceOccludedSinceScreenOn:(bool)arg1;
- (void)setFaceWUPoseEligibleSinceScreenOn:(bool)arg1;
- (void)setLiftToWakeGestureDetectedSinceScreenOn:(bool)arg1;
- (void)setSignificantUserInteractionOccuredSinceScreenOn:(bool)arg1;
- (void)setTestAutoUnlockManager:(id)arg1;
- (void)setWakeSourceIsUserAction:(bool)arg1;
- (bool)shouldPhoneCompleteAutoUnlockWithNotification;
- (bool)showRawErrorCodes;
- (bool)significantUserInteractionOccuredSinceScreenOn;
- (bool)wakeSourceIsUserAction;

@end
