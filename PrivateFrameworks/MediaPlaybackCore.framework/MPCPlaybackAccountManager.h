
@interface MPCPlaybackAccountManager : NSObject <ICEnvironmentMonitorObserver> {
    NSDictionary * _accounts;
    NSObject<OS_dispatch_group> * _initialAccountGroup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needsRefreshDueToMissingBag;
    bool  _needsRefreshDueToTimeout;
    NSHashTable * _observers;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _observersLock;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic, readonly) MPCPlaybackAccount *activeAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLoadedInitialAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (id)sharedManagerIfExists;

- (void).cxx_destruct;
- (void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_buildAccountFromLocalIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_enumerateIdentitiesWithCompletion:(id /* block */)arg1;
- (void)_homeUserSettingsChangeNotification:(id)arg1;
- (id)_init;
- (void)_setNeedsRefreshDueToMissingBag:(bool)arg1;
- (bool)_shouldPurgeGlideSubscriptionDataForAccount:(id)arg1;
- (void)_subscriptionStatusChangedNotification:(id)arg1;
- (void)_updateAccounts;
- (void)_updateAccountsWithAttemptCount:(long long)arg1;
- (void)_userIdentityStoreChangedNotification:(id)arg1;
- (id)accountForDSID:(id)arg1;
- (id)accountForHashedDSID:(id)arg1;
- (id)accountForUserIdentity:(id)arg1;
- (id)accounts;
- (id)activeAccount;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (bool)hasLoadedInitialAccounts;
- (void)performAfterLoadingAccounts:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)start;
- (void)unregisterObserver:(id)arg1;
- (void)waitForAccountsWithCompletion:(id /* block */)arg1;

@end
