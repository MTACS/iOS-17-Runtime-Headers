
@interface NCModeManager : NSObject <DNDModeConfigurationServiceListener, DNDStateUpdateListener> {
    DNDModeConfiguration * _currentModeConfiguration;
    DNDModeConfigurationService * _modeConfigurationService;
    NSHashTable * _observers;
    DNDStateService * _stateService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchCurrentModeConfiguration;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (void)_updateWithModeConfiguration:(id)arg1 previousModeConfiguration:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)currentModeConfiguration;
- (void)dealloc;
- (id)init;
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)setModeConfiguration:(id)arg1;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end
