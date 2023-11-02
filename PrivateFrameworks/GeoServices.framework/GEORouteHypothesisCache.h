
@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager * _persistenceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeAllEntries;
- (void)dealloc;
- (id)descriptionOfAllEntries;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)arg1;
- (id)init;
- (id)loadEntryForRowId:(long long)arg1;
- (id)loadValueForKey:(id)arg1;
- (double)nextRefreshTimeStamp;
- (long long)numberOfEntriesOnDisk;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (void)removeKey:(id)arg1 value:(id)arg2;
- (void)saveValue:(id)arg1 forKey:(id)arg2;
- (void)tearDown;

@end
