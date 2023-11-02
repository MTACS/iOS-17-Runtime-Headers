
@interface WBSRecentlyBreachedPasswordProvider : NSObject {
    WBSPasswordBreachHelperProxy * _helperProxy;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _recentlyBreachedSavedAccounts;
    bool  _recentlyBreachedSavedAccountsLookupStarted;
}

@property (nonatomic, readonly, copy) NSArray *recentlyBreachedSavedAccountsIfAvailable;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_getRecentlyBreachedSavedAccountsWithCompletionHandler:(id /* block */)arg1;
- (void)clearRecentlyBreachedSavedAccounts;
- (void)dealloc;
- (id)init;
- (id)recentlyBreachedSavedAccountsIfAvailable;

@end
