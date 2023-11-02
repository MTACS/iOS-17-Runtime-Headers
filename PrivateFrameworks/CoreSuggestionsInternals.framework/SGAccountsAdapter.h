
@interface SGAccountsAdapter : NSObject {
    ACAccountStore * _accountStore;
    NSString * _cachedPrimaryICloudAccount;
    NSObject<OS_dispatch_queue> * _updateQueue;
    NSObject<OS_dispatch_source> * _updateSource;
    bool  _updateTimerIsSet;
    NSObject<OS_dispatch_queue> * _updateTimerQueue;
    NSObject<OS_dispatch_source> * _updateTimerSource;
    NSSet * _usernamesCache;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accountsStoreDidChange:(id)arg1;
- (void)cancelUpdateTimer;
- (void)dealloc;
- (bool)hasCalendarAccount:(id)arg1;
- (id)init;
- (id)primaryICloudCalendarAccount;
- (bool)readCachedAccounts;
- (void)refreshCacheFromAccountsService;
- (void)registerNotificationObserver;
- (void)removeNotificationObserver;
- (id)serverIdentifierForAccount:(id)arg1;
- (void)setCachedAccounts;
- (void)setUpdateTimerWithDelaySeconds:(unsigned long long)arg1;

@end
