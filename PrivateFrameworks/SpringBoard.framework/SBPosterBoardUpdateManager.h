
@interface SBPosterBoardUpdateManager : NSObject {
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_criteriaForUpdate:(long long)arg1;
- (bool)_isXPCActivity:(long long)arg1;
- (void)_noteApplicationsChanged:(id)arg1;
- (void)_notifyDidFinishUpdate:(long long)arg1 error:(id)arg2;
- (void)_notifyWillBeginUpdate:(long long)arg1;
- (void)_registerForWork:(long long)arg1;
- (void)_unregisterForWork:(long long)arg1;
- (id)_xpcActivityNameForUpdate:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)executeUpdate:(long long)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
