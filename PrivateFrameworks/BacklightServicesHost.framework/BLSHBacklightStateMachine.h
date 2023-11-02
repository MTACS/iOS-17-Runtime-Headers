
@interface BLSHBacklightStateMachine : NSObject <BLSBacklightProxy, BLSHBacklightHostObservable, BLSHBacklightHostObserving, BLSHBacklightHostTelemetrySource, BLSHBacklightPlatformProviderObserver, BLSHBacklightStateMachineEventPerformerDelegate, BLSHDisableAlwaysOnProvider, BLSHOnSystemSleepActionDelegate> {
    BLSBacklightChangeEvent * _activeTransitionEvent;
    bool  _deviceSupportsAlwaysOn;
    <BLSHBacklightStateMachineEventPerforming> * _eventPerformer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSHSystemActivityAsserting> * _lock_activeOnAPAwakeAssertion;
    unsigned long long  _lock_activeOnAPAwakeAssertionAcquireTime;
    <BSTimerScheduleQuerying><BSInvalidatable> * _lock_activeOnAPAwakeTimeoutTimer;
    long long  _lock_activityState;
    bool  _lock_alwaysOnDisabledByAssertion;
    bool  _lock_alwaysOnEnabledAfterInitialization;
    bool  _lock_alwaysOnEnabledByPlatform;
    bool  _lock_alwaysOnEnabledResolved;
    bool  _lock_alwaysOnSuppressed;
    BLSAssertion * _lock_flipbookPowerSavingAssertion;
    unsigned long long  _lock_nextEventID;
    bool  _lock_notifyingObserversWillTransitionToState;
    NSHashTable * _lock_observers;
    <BLSHSystemActivityAsserting> * _lock_performEventAPAwakeAssertion;
    id /* block */  _lock_sleepActionCompletion;
    BLSBacklightChangeEvent * _lock_transitioningEvent;
    <BSInvalidatable> * _lock_unexpectedSleepDebounceTimer;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
    BLSHOnSystemSleepAction * _sleepAction;
    bool  _suppressionSupported;
    <BLSHBacklightHostTelemetryDelegate> * _telemetryDelegate;
}

@property (nonatomic, readonly) BLSBacklightChangeEvent *activeTransitionEvent;
@property (getter=isAlwaysOnDisabledByAssertion, nonatomic) bool alwaysOnDisabledByAssertion;
@property (getter=isAlwaysOnEnabled, nonatomic, readonly) bool alwaysOnEnabled;
@property (getter=isAlwaysOnSuppressed, nonatomic, readonly) bool alwaysOnSuppressed;
@property (nonatomic, readonly) long long backlightState;
@property (nonatomic, readonly) unsigned long long backlightStateChangeTimestamp;
@property (nonatomic, readonly, copy) NSString *backlightStateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceSupportsAlwaysOn;
@property (nonatomic, readonly) <BLSHBacklightStateMachineEventPerforming> *eventPerformer;
@property (nonatomic, readonly) long long flipbookState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property <BLSHBacklightHostTelemetryDelegate> *telemetryDelegate;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

- (void).cxx_destruct;
- (id)activeTransitionEvent;
- (void)addObserver:(id)arg1;
- (void)backlight:(id)arg1 didCompleteUpdateToFlipbookState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (long long)backlightState;
- (unsigned long long)backlightStateChangeTimestamp;
- (id)backlightStateDescription;
- (void)dealloc;
- (bool)deviceSupportsAlwaysOn;
- (id)eventPerformer;
- (void)eventPerformer:(id)arg1 didUpdateDisplayStateForState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (void)eventPerformer:(id)arg1 didUpdateVisualContentsToBeginTransitionToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (long long)flipbookState;
- (id)initWithPlatformProvider:(id)arg1 eventPerformer:(id)arg2 osInterfaceProvider:(id)arg3;
- (bool)isAlwaysOnDisabledByAssertion;
- (bool)isAlwaysOnEnabled;
- (bool)isAlwaysOnSuppressed;
- (bool)isTransitioning;
- (id)performChangeRequest:(id)arg1;
- (void)performUnexpectedSleepRequest:(id)arg1;
- (void)platformProvider:(id)arg1 didChangeAlwaysOnSetting:(bool)arg2;
- (void)platformProviderDidDetectSignificantUserInteraction:(id)arg1;
- (void)registerHandlersForService:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAlwaysOnDisabledByAssertion:(bool)arg1;
- (void)setTelemetryDelegate:(id)arg1;
- (void)systemSleepAction:(id)arg1 performWithCompletion:(id /* block */)arg2;
- (void)systemSleepAction:(id)arg1 systemWillWakeForReason:(id)arg2;
- (id)telemetryDelegate;

@end
