
@interface WBSGeneratedPasswordStore : NSObject {
    NSMutableArray * _cachedGeneratedPasswords;
    WBSKeychainCredentialNotificationMonitor * _keychainMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldIgnoreKeychainUpdates;
}

@property (nonatomic, readonly) NSArray *allUnexpiredGeneratedPasswords;
@property (nonatomic, readonly) NSDate *currentExpirationDate;

+ (id)sharedStore;

- (void).cxx_destruct;
- (id)_generatedPasswordsFilteringExpiredPasswords:(id)arg1 olderThanDate:(id)arg2;
- (void)_loadIfNeeded;
- (void)_purgeExpiredPasswordsOnInternalQueue:(id)arg1;
- (void)_removeAllGeneratedPasswordsOnInternalQueue;
- (void)_reset;
- (void)addGeneratedPassword:(id)arg1 forProtectionSpace:(id)arg2 inPrivateBrowsingSession:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)allUnexpiredGeneratedPasswords;
- (id)currentExpirationDate;
- (id)generatedPasswordsForProtectionSpace:(id)arg1 options:(unsigned long long)arg2;
- (id)init;
- (void)preWarm;
- (void)removeGeneratedPassword:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)synchronouslyRemoveGeneratedPasswordsNewerThanDate:(id)arg1;
- (void)updateGeneratedPassword:(id)arg1 withPassword:(id)arg2 completionHandler:(id /* block */)arg3;

@end
