
@interface SUCSScheduler : NSObject {
    <_CDContext> * _context;
    _CDContextualChangeRegistration * _registration;
}

+ (int)_batteryLevel;
+ (bool)_callInProgress;
+ (bool)_getBoolForKeyPath:(id)arg1;
+ (int)_getIntForKeyPath:(id)arg1;
+ (bool)_hasNetworkConnection;
+ (id)batteryLevelPredicate:(id)arg1;
+ (id)carplayPredicate:(bool)arg1;
+ (id)networkPredicate:(bool)arg1;
+ (id)phoneCallPredicate:(bool)arg1;

- (void)dealloc;
- (id)init;
- (void)registerInstallAlertConditionsWithHandler:(id /* block */)arg1;
- (void)unregisterInstallationAlertAction;

@end
