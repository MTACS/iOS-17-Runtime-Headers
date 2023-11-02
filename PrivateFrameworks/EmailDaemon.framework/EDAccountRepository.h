
@interface EDAccountRepository : NSObject <EDAccountChangeHookResponder, EFLoggable> {
    <EDAccountsProvider> * _accountsProvider;
    EDPersistenceHookRegistry * _hookRegistry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _observers;
    EDAccountECAccountTransformer * _transformer;
}

@property (nonatomic, retain) <EDAccountsProvider> *accountsProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) Class superclass;
@property (nonatomic, retain) EDAccountECAccountTransformer *transformer;

+ (id)log;

- (void).cxx_destruct;
- (void)accountsAdded:(id)arg1;
- (void)accountsChanged:(id)arg1;
- (id)accountsProvider;
- (void)accountsRemoved:(id)arg1;
- (id)allAccounts;
- (void)allAccountsWithCompletionHandler:(id /* block */)arg1;
- (id)hookRegistry;
- (id)initWithAccountsProvider:(id)arg1 hookRegistry:(id)arg2;
- (void)registerObserver:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAccountsProvider:(id)arg1;
- (void)setHookRegistry:(id)arg1;
- (void)setTransformer:(id)arg1;
- (id)transformAccounts:(id)arg1;
- (id)transformer;

@end
