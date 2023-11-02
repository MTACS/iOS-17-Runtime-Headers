
@interface SBBiometricEventLogger : NSObject <SBUIBiometricResourceObserver> {
    BiometricKit * _biometricKit;
    <SBUIBiometricResource> * _biometricResource;
    unsigned long long  _fingerOnTime;
    bool  _fingerOnWithScreenOn;
    bool  _isScreenOn;
    unsigned long long  _keybagUnlockTime;
    bool  _passcodeSuccessAfterBioFailureTriggerArmed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long fingerOnTime;
@property (nonatomic) bool fingerOnWithScreenOn;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long keybagUnlockTime;
@property (readonly) Class superclass;

+ (void)logClass:(unsigned char)arg1 code:(unsigned int)arg2;
+ (void)logEvent:(unsigned int)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_authRequestCompleted:(id)arg1;
- (void)_backlightLevelChanged:(id)arg1;
- (void)_biometricAuthenticationFailed;
- (void)_biometricAuthenticationSucceeded;
- (void)_clearEverything;
- (void)_coversheetSwipedForDismissal:(id)arg1;
- (void)_fingerOn:(id)arg1;
- (void)_keybagBioUnlock:(id)arg1;
- (unsigned long long)_machTimeInMilliseconds;
- (void)_passcodeAuthenticationSucceeded;
- (void)_passcodePromptCancelled:(id)arg1;
- (void)_passcodeViewTransitionedToPasscode:(id)arg1;
- (void)_prearmMatch:(id)arg1;
- (void)_resetPasscodeStateMachine;
- (void)_screenTurnedOn:(id)arg1;
- (bool)_shouldSyslogTimestamps;
- (void)_systemDidWakeFromSleep:(id)arg1;
- (void)_tryAgain:(id)arg1;
- (void)_unlockAnimationWillStart:(id)arg1;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (unsigned long long)fingerOnTime;
- (bool)fingerOnWithScreenOn;
- (id)init;
- (unsigned long long)keybagUnlockTime;
- (void)setFingerOnTime:(unsigned long long)arg1;
- (void)setFingerOnWithScreenOn:(bool)arg1;
- (void)setKeybagUnlockTime:(unsigned long long)arg1;
- (void)timestampEvent:(unsigned long long)arg1;

@end
