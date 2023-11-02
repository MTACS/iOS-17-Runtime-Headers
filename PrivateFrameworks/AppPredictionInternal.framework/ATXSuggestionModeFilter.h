
@interface ATXSuggestionModeFilter : NSObject {
    ATXDNDModeConfigurationClient * _client;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
}

+ (id)_currentModeUUID;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateConfigurationWithModeUUID:(id)arg1 notifyingObservers:(bool)arg2;
- (bool)currentModeConfigurationAllowsBundleId:(id)arg1;
- (bool)currentModeConfigurationAllowsSuggestion:(id)arg1;
- (id)init;
- (void)registerForModeChanges;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
