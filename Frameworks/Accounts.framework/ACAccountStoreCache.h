
@interface ACAccountStoreCache : NSObject {
    NSMutableDictionary * _accountNotifyCaches;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountNotifyCachesLock;
    NSMutableDictionary * _accountTypeCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountTypeCacheLock;
    bool  _allAccountTypeCached;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_clearAllCaches;
- (void)_lock_cacheAccountType:(id)arg1;
- (void)cacheAccountType:(id)arg1;
- (void)cacheAccounts:(id)arg1 forSuffix:(id)arg2;
- (void)cacheAllAccountTypes:(id)arg1;
- (id)cachedAccountTypeWithIdentifier:(id)arg1;
- (id)cachedAccountsForSuffix:(id)arg1;
- (id)cachedAllAccountTypes;
- (unsigned long long)generationForCacheSuffix:(id)arg1;
- (id)init;

@end
