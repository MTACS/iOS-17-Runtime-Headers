
@interface SBDisplayReferenceModeMonitor : NSObject {
    NSMutableDictionary * _CADisplayIdentifierToFBSDisplayConfig;
    NSMutableDictionary * _CADisplayIdentifierToObservers;
    NSMutableDictionary * _displayToCachedStatus;
    NSMutableSet * _observedDisplays;
}

+ (bool)canAddObserverForDisplayWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 forDisplay:(id)arg2;
- (long long)_cachedStatusForDisplay:(id)arg1;
- (id)_configurationForDisplay:(id)arg1;
- (id)_displayForConfiguration:(id)arg1;
- (void)_enumerateObserversOfDisplay:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_observersForDisplay:(id)arg1;
- (long long)_referenceModeStatusForDisplay:(id)arg1;
- (void)_removeCachedStatusForDisplay:(id)arg1;
- (void)_removeObserver:(id)arg1 forDisplay:(id)arg2;
- (void)_setCachedStatus:(long long)arg1 forDisplay:(id)arg2;
- (void)_setConfig:(id)arg1 forDisplay:(id)arg2;
- (bool)_shouldNotifyObserversOfReferenceModeStatusChangeForDisplay:(id)arg1;
- (void)_startObservingDisplayIfNeeded:(id)arg1;
- (void)_stopObservingDisplay:(id)arg1;
- (void)addReferenceModeStatusObserver:(id)arg1 forDisplayWithConfiguration:(id)arg2;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)referenceModeStatusForDisplayWithConfiguration:(id)arg1;
- (void)removeReferenceModeStatusObserver:(id)arg1 forDisplayWithConfiguration:(id)arg2;

@end
