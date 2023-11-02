
@interface APSigningContextsStorage : NSObject {
    APSigningKeychainServices * _keychainServices;
    NSString * _launchID;
    APUnfairLock * _lock;
}

@property (nonatomic, retain) APSigningKeychainServices *keychainServices;
@property (nonatomic, retain) NSString *launchID;
@property (nonatomic, retain) APUnfairLock *lock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_checkDuplicate:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)_destroyAndClearAllPreviousContextsForType:(long long)arg1;
- (void)_destroyAndClearAllPreviousLaunchContexts;
- (void)_removeStoredContext:(unsigned long long)arg1 forType:(long long)arg2;
- (void)destroyAndClearAllContexts;
- (id)init;
- (id)keychainServices;
- (id)launchID;
- (id)lock;
- (void)removeStoredContext:(unsigned long long)arg1;
- (id)retrieveSuccessfulContexts;
- (void)setKeychainServices:(id)arg1;
- (void)setLaunchID:(id)arg1;
- (void)setLock:(id)arg1;
- (void)storeInProgressContext:(unsigned long long)arg1 isStashed:(bool)arg2;
- (void)storeSuccessfulContext:(unsigned long long)arg1;
- (void)storeUsedContext:(unsigned long long)arg1;

@end
