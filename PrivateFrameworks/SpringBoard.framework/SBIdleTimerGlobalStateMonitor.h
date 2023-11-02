
@interface SBIdleTimerGlobalStateMonitor : NSObject <SBBacklightControllerObserver, SBFThermalConditionObserver, SBIdleTimerServiceDelegate, SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate> {
    SBIdleTimerAggregateClientConfiguration * _aggregateClientConfiguration;
    bool  _autoDimDisabled;
    _SBIdleTimerGlobalNumericSettingMonitor * _autoLockTimeoutMonitor;
    SBBacklightController * _backlightController;
    _SBIdleTimerGlobalBoolSettingMonitor * _batterySaverModeMonitor;
    id /* block */  _disableAttentionAwareness;
    id /* block */  _dontDimOrLockOnAC;
    id /* block */  _dontLockEver;
    bool  _faceDownOnTable;
    SBIdleTimerService * _idleTimerService;
    SBLocalDefaults * _localDefaults;
    id /* block */  _minimumLockscreenIdleTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSHashTable * _observers;
    _SBIdleTimerGlobalBoolSettingMonitor * _onACPowerMonitor;
    long long  _pocketState;
    bool  _screenIsOn;
    <BSInvalidatable> * _stateCaptureAssertion;
    <SBFThermalBlockProvider> * _thermalBlockProvider;
    bool  _thermalBlocked;
}

@property (nonatomic, readonly) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration;
@property (getter=isAutoDimDisabled, nonatomic, readonly) bool autoDimDisabled;
@property (nonatomic, readonly) NSNumber *autoLockTimeout;
@property (getter=isBatterySaverModeActive, nonatomic, readonly) bool batterySaverModeActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableAttentionAwareness;
@property (nonatomic, readonly) bool dontDimOrLockOnAC;
@property (nonatomic, readonly) bool dontLockEver;
@property (getter=isFaceDownOnTable, nonatomic, readonly) bool faceDownOnTable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimumLockscreenIdleTime;
@property (getter=isOnACPower, nonatomic, readonly) bool onACPower;
@property (nonatomic, readonly) long long pocketState;
@property (readonly) Class superclass;
@property (getter=isThermalBlocked, nonatomic, readonly) bool thermalBlocked;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addStateCaptureHandlers;
- (id /* block */)_boolMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(id /* block */)arg3;
- (id)_init;
- (id)_initWithLocalDefaults:(id)arg1 profileConnection:(id)arg2 pocketStateMonitor:(id)arg3 uiController:(id)arg4 idleTimerService:(id)arg5 thermalBlockProvider:(id)arg6 backlightController:(id)arg7;
- (id)_stateCaptureDescription;
- (id /* block */)_timeIntervalMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(id /* block */)arg3;
- (void)_updateAutoDimDisabled;
- (void)_updateFaceDownOnTable;
- (void)_updateObserversForReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)aggregateClientConfiguration;
- (id)autoLockTimeout;
- (void)backlightController:(id)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)dealloc;
- (bool)disableAttentionAwareness;
- (bool)dontDimOrLockOnAC;
- (bool)dontLockEver;
- (void)idleTimerGlobalSettingMonitor:(id)arg1 changedForReason:(id)arg2;
- (void)idleTimerServiceTimeoutAssertionsDidChange:(id)arg1;
- (bool)isAutoDimDisabled;
- (bool)isBatterySaverModeActive;
- (bool)isFaceDownOnTable;
- (bool)isOnACPower;
- (bool)isThermalBlocked;
- (double)minimumLockscreenIdleTime;
- (long long)pocketState;
- (void)pocketStateMonitor:(id)arg1 pocketStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)removeObserver:(id)arg1;
- (void)thermalBlockStatusChanged:(id)arg1;

@end
