
@interface CNManagedAccountsCache : NSObject {
    ACAccountStore * _accountStore;
    CNCache * _accountsCache;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) CNCache *accountsCache;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)accountForIdentifier:(id)arg1;
- (id)accountStore;
- (id)accountsCache;
- (id)accountsForIdentifiers:(id)arg1;
- (void)clearCache;
- (id)init;
- (void)setAccountStore:(id)arg1;
- (void)setAccountsCache:(id)arg1;

@end
