
@interface WFAccountCache : NSObject {
    NSCache * _cache;
}

@property (nonatomic, readonly) NSCache *cache;

- (void).cxx_destruct;
- (id)accountsForService:(id)arg1;
- (id)cache;
- (void)clearCacheForService:(id)arg1;
- (id)init;
- (id)numberOfAccountsForService:(id)arg1;
- (void)setAccounts:(id)arg1 forService:(id)arg2;
- (void)setNumberOfAccounts:(id)arg1 forService:(id)arg2;

@end
