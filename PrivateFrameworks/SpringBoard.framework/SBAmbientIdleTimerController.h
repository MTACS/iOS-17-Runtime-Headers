
@interface SBAmbientIdleTimerController : NSObject <PTSettingsKeyObserver, SBFIdleTimerBehaviorProviding> {
    SBAmbientSettings * _ambientSettings;
    bool  _ambientSuppressed;
    bool  _idleTimerAllowedForAssertions;
    bool  _idleTimerAllowedForSuppression;
    unsigned long long  _monitoredSuppressionReasons;
    NSHashTable * _observers;
    bool  _suppressionEnabled;
    CMSuppressionManager * _suppressionManager;
    bool  _suppressionMonitoringActive;
    bool  _suppressionServiceStarted;
    bool  _userSleepPredicted;
    SBWindowScene * _windowScene;
}

@property (getter=isAmbientSuppressed, setter=_setAmbientSuppressed:, nonatomic) bool ambientSuppressed;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isIdleTimerAllowedForAssertions, setter=_setIdleTimerAllowedForAssertions:, nonatomic) bool idleTimerAllowedForAssertions;
@property (getter=_isIdleTimerAllowedForSuppression, setter=_setIdleTimerAllowedForSuppression:, nonatomic) bool idleTimerAllowedForSuppression;
@property (nonatomic, readonly) <SBFIdleTimerBehaviorProviding> *idleTimerBehaviorProvider;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (readonly) Class superclass;
@property (getter=isSuppressionMonitoringActive, nonatomic) bool suppressionMonitoringActive;
@property (getter=isUserSleepPredicted, setter=_setUserSleepPredicted:, nonatomic) bool userSleepPredicted;
@property (getter=_windowScene, setter=_setWindowScene:, nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (bool)_isIdleTimerAllowedForAssertions;
- (bool)_isIdleTimerAllowedForSuppression;
- (void)_notifyObserversIdleTimerBehaviorDidChange;
- (void)_notifyObserversSuppressionDidEnd;
- (void)_notifyObserversUserSleepPredictedDidChange;
- (void)_setActiveSuppressionReasons:(unsigned long long)arg1;
- (void)_setAmbientSuppressed:(bool)arg1;
- (void)_setIdleTimerAllowedForAssertions:(bool)arg1;
- (void)_setIdleTimerAllowedForSuppression:(bool)arg1;
- (void)_setSuppressionEnabled:(bool)arg1;
- (void)_setUserSleepPredicted:(bool)arg1;
- (void)_setWindowScene:(id)arg1;
- (unsigned long long)_sourcesForMonitoredEvents;
- (void)_updateAmbientSuppressed;
- (void)_updateSuppressionManager;
- (void)_updateUserSleepPredicted;
- (id)_windowScene;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)idleTimerBehaviorProvider;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)initWithWindowScene:(id)arg1;
- (bool)isAmbientSuppressed;
- (bool)isSuppressionMonitoringActive;
- (bool)isUserSleepPredicted;
- (void)removeObserver:(id)arg1;
- (void)setSuppressionMonitoringActive:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
