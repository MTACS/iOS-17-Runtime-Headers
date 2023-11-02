
@interface TBCoreDataSource : TBDataSource <TBCacheProvider> {
    unsigned long long  _cacheExpirationInDays;
    NSManagedObjectContext * _context;
    TBCoreDataStoreDescriptor * _descriptor;
    bool  _hasStorageError;
    TBPersistenceManager * _persistenceManager;
}

@property (nonatomic) unsigned long long cacheExpirationInDays;
@property (nonatomic, retain) NSManagedObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TBCoreDataStoreDescriptor *descriptor;
@property (nonatomic) bool hasStorageError;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TBPersistenceManager *persistenceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canSupportRequest:(id)arg1;
- (void)_createNewNetwork:(id)arg1 tile:(id)arg2 withMOC:(id)arg3;
- (void)_createNewNetworkFromDictionary:(id)arg1 withMOC:(id)arg2;
- (void)_executeFetchRequest:(id)arg1;
- (void)_executePreferLocalFetchRequest:(id)arg1;
- (unsigned long long)cacheExpirationInDays;
- (void)cacheFetchResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)context;
- (id)descriptor;
- (void)executeFetchRequest:(id)arg1;
- (bool)hasStorageError;
- (void)importObjectsWithArray:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithStoreDescriptor:(id)arg1;
- (id)persistenceManager;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllWithCompletionHandler:(id /* block */)arg1;
- (void)removeWithFetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCacheExpirationInDays:(unsigned long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setHasStorageError:(bool)arg1;
- (void)setPersistenceManager:(id)arg1;
- (unsigned long long)type;

@end
