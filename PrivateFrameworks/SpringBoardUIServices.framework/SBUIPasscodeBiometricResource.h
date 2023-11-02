
@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource> {
    SBUIBiometricResource * _biometricResource;
    <SBUIPasscodeBiometricMatchingAssertionFactory> * _overrideMatchingAssertionFactory;
}

@property (nonatomic, readonly) unsigned long long biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFingerDetectEnabled, nonatomic, readonly) bool fingerDetectEnabled;
@property (getter=isFingerOn, nonatomic, readonly) bool fingerOn;
@property (nonatomic, readonly) bool hasBiometricAuthenticationCapabilityEnabled;
@property (nonatomic, readonly) bool hasEnrolledIdentities;
@property (nonatomic, readonly) bool hasMesaSupport;
@property (nonatomic, readonly) bool hasPearlSupport;
@property (nonatomic, readonly) bool hasPoseidonSupport;
@property (readonly) unsigned long long hash;
@property (getter=isMatchingAllowed, nonatomic, readonly) bool matchingAllowed;
@property (getter=isMatchingEnabled, nonatomic, readonly) bool matchingEnabled;
@property (getter=isPearlDetectEnabled, nonatomic, readonly) bool pearlDetectEnabled;
@property (getter=isPeriocularMatchingEnabled, nonatomic, readonly) bool periocularMatchingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireFaceDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 HIDEventsOnly:(bool)arg2;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)addObserver:(id)arg1;
- (unsigned long long)biometricLockoutState;
- (bool)hasBiometricAuthenticationCapabilityEnabled;
- (bool)hasEnrolledIdentities;
- (bool)hasMesaSupport;
- (bool)hasPearlSupport;
- (bool)hasPoseidonSupport;
- (id)initWithBiometricResource:(id)arg1 overrideMatchingAssertionFactory:(id)arg2;
- (bool)isFingerDetectEnabled;
- (bool)isFingerOn;
- (bool)isMatchingAllowed;
- (bool)isMatchingEnabled;
- (bool)isPearlDetectEnabled;
- (bool)isPeriocularMatchingEnabled;
- (void)refreshMatchMode;
- (void)removeObserver:(id)arg1;
- (void)resumeMatchingAdvisory:(bool)arg1;
- (void)resumeMatchingForAssertion:(id)arg1 advisory:(bool)arg2;

@end
