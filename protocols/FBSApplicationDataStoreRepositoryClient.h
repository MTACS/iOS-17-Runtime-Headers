
@protocol FBSApplicationDataStoreRepositoryClient <NSObject>

@required

- (void)addObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (void)addPrefetchedKeys:(NSArray *)arg1;
- (NSArray *)availableDataStores;
- (void)invalidate;
- (NSError *)migrateIdentifier:(NSString *)arg1 toIdentifier:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (bool)prefetchedObjectIfAvailableForKey:(NSString *)arg1 application:(NSString *)arg2 outObject:(id*)arg3;
- (void)removeAllObjectsForApplication:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObjectForKey:(void *)arg1 forApplication:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (void)removePrefetchedKeys:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setObject:(void *)arg1 forKey:(void *)arg2 forApplication:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: id, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)synchronizeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
