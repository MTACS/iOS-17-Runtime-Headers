
@interface ACSystemConfigManager : NSObject {
    int  _applySkipCount;
    NSObject<OS_dispatch_queue> * _preferencesQueue;
    struct __SCPreferences { } * _preferencesSession;
}

+ (id)_livingInstance;
+ (void)_scheduleSharedInstanceTeardown;
+ (void)_tearDown;
+ (unsigned long long)_timeoutInterval;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createSCPreferencesSession;
- (void)_destroySCPreferencesSession;
- (void*)_getValueForKey:(id)arg1;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)arg1;
- (void)_setValue:(void*)arg1 forKey:(id)arg2;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(bool)arg2;
- (void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2;

@end
