
@interface SBBacklightController : NSObject <BLSBacklightStateObserving, BLSHBacklightHostObserving> {
    SBAlwaysOnDefaults * _alwaysOnDefaults;
    id /* block */  _backlightCompletion;
    long long  _backlightState;
    BrightnessSystemClient * _brightnessSystemClient;
    <SBBacklightControllerContextProviding> * _contextProvider;
    <BSInvalidatable> * _currentDisplayStateAssertion;
    <BSInvalidatable> * _currentHIDUISensorModeAssertion;
    bool  _digitizerDisabled;
    BLSAssertion * _disableAODAssertion;
    bool  _hasPerformedBacklightChange;
    NSHashTable * _informers;
    bool  _isPendingScreenUnblankAfterCACommit;
    long long  _lastBacklightChangeSource;
    long long  _lastReportedWillTransitionState;
    NSHashTable * _observers;
    bool  _tapToWakeEnabled;
    bool  _tapToWakeRequiresHitTestSuppression;
}

@property (nonatomic, readonly) long long backlightState;
@property (nonatomic, retain) <BSInvalidatable> *currentDisplayStateAssertion;
@property (nonatomic, retain) <BSInvalidatable> *currentHIDUISensorModeAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDigitizerDisabled, nonatomic, readonly) bool digitizerDisabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPendingScreenUnblankAfterCACommit;
@property (nonatomic, readonly) long long lastBacklightChangeSource;
@property (nonatomic, readonly) bool screenIsDim;
@property (nonatomic, readonly) bool screenIsOn;
@property (readonly) Class superclass;
@property (getter=isTapToWakeEnabled, nonatomic, readonly) bool tapToWakeEnabled;
@property (nonatomic, readonly) bool tapToWakeRequiresHitTestSuppression;

+ (id)_sharedInstanceCreateIfNeeded:(bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (float)_factorToPublishForBacklightState:(long long)arg1;
- (void)_noteDigitizerDisabled:(bool)arg1 tapToWakeEnabled:(bool)arg2 disabledDigitizerMode:(long long)arg3;
- (void)_notifyObserversDidAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)_notifyObserversDidTransitionToBacklightState:(long long)arg1 source:(long long)arg2;
- (void)_notifyObserversWillAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)_notifyObserversWillTransitionToBacklightState:(long long)arg1 source:(long long)arg2;
- (void)_performBacklightChangeRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;
- (void)_undimFromSource:(long long)arg1;
- (void)_updateHIDUISensorModeForBacklightState:(long long)arg1 source:(long long)arg2;
- (void)_userInterfaceStyleChanged;
- (void)addObserver:(id)arg1;
- (void)allowIdleSleep;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (void)backlightHost:(id)arg1 willTransitionToState:(long long)arg2 forEvent:(id)arg3;
- (long long)backlightState;
- (void)completeStartup;
- (id)currentDisplayStateAssertion;
- (id)currentHIDUISensorModeAssertion;
- (double)defaultLockScreenDimInterval;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (id)init;
- (id)initWithContextProvider:(id)arg1;
- (bool)isDigitizerDisabled;
- (bool)isPendingScreenUnblankAfterCACommit;
- (bool)isTapToWakeEnabled;
- (long long)lastBacklightChangeSource;
- (void)preventIdleSleep;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)registerInformer:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)screenIsDim;
- (bool)screenIsOn;
- (void)setBacklightState:(long long)arg1 source:(long long)arg2;
- (void)setBacklightState:(long long)arg1 source:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setCurrentDisplayStateAssertion:(id)arg1;
- (void)setCurrentHIDUISensorModeAssertion:(id)arg1;
- (bool)shouldTurnOnScreenForBacklightSource:(long long)arg1;
- (bool)tapToWakeRequiresHitTestSuppression;
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1;
- (void)unregisterInformer:(id)arg1;

@end
