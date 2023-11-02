
@interface HDDatabaseValueCacheTransactionStorage : NSObject {
    NSMutableDictionary * _cache;
    long long  _cacheScope;
    bool  _didRemoveAllObjects;
}

- (void).cxx_destruct;
- (id)init;

@end
