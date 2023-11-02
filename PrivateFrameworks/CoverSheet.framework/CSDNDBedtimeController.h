
@interface CSDNDBedtimeController : NSObject <DNDStateUpdateListener, HKSPSleepStoreObserver> {
    bool  _active;
    bool  _deactivated;
    BSAbsoluteMachTimer * _greetingGracePeriodTimer;
    NSHashTable * _observers;
    bool  _shouldShowGreeting;
    HKSPSleepSettings * _sleepSettings;
    HKSPSleepStore * _sleepStore;
    DNDStateService * _stateService;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGreetingDisabled, nonatomic, readonly) bool greetingDisabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldShowGreeting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpGreetingGracePeriodTimer;
- (void)_setShouldShowGreeting:(bool)arg1;
- (void)_setShouldShowGreeting:(bool)arg1 forceUpdateObservers:(bool)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStateService:(id)arg1 initialObserver:(id)arg2;
- (bool)isActive;
- (bool)isGreetingDisabled;
- (void)removeObserver:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setShouldShowGreeting:(bool)arg1;
- (bool)shouldShowGreeting;
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end
