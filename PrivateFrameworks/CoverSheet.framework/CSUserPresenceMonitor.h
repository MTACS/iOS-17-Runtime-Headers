
@interface CSUserPresenceMonitor : NSObject <CSEventHandling> {
    NSMutableSet * _activationReasons;
    <SBUIBiometricResource> * _biometricResource;
    bool  _coverSheetResignedActive;
    <BSInvalidatable> * _faceDetectAssertion;
    NSHashTable * _observers;
    bool  _userPresenceDetectedSinceWake;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userPresenceDetectedSinceWake;

+ (void)synthesizeUserPresenceForReason:(id)arg1;

- (void).cxx_destruct;
- (bool)_handleBiometricEvent:(unsigned long long)arg1;
- (bool)_isFaceDetectPermitted;
- (void)_monitorForInjectedUserPresence;
- (void)_setUserPresenceDetectedSinceWake:(bool)arg1;
- (void)_updateFaceDetectionState;
- (void)addObserver:(id)arg1;
- (void)conformsToCSEventHandling;
- (void)dealloc;
- (void)disableDetectionForReason:(id)arg1;
- (void)enableDetectionForReason:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (id)initWithBiometricResource:(id)arg1;
- (bool)isUserPresenceDetectionSupported;
- (void)removeObserver:(id)arg1;
- (bool)userPresenceDetectedSinceWake;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
