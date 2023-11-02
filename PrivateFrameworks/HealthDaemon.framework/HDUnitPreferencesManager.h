
@interface HDUnitPreferencesManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKObserverSet * _observers;
    HDProfile * _profile;
    NSArray * _versionedUnitPreferences;
}

- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (void)addUnitPreferenceObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)preferredUnitForType:(id)arg1 error:(id*)arg2;
- (bool)removePreferredUnitForType:(id)arg1 error:(id*)arg2;
- (void)removeUnitPreferenceObserver:(id)arg1;
- (bool)setPreferredUnit:(id)arg1 forType:(id)arg2 error:(id*)arg3;
- (void)setPreferredUnitToDefaultIfNotSetForType:(id)arg1;
- (id)unitPreferencesDictionaryForTypes:(id)arg1 version:(long long)arg2 authorizationOracle:(id)arg3 error:(id*)arg4;
- (void)unitTesting_resetUnits;

@end
