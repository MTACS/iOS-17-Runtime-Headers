
@protocol HMMTRStorageDataSource <NSObject>

@optional

- (NSSet *)allFabricIDs;
- (NSSet *)allPairedHAPServerIdentifiers;
- (NSNumber *)currentFabricID;
- (NSDictionary *)keyValueStore;
- (NSDictionary *)keyValueStoreForFabricWithID:(NSNumber *)arg1;
- (<HMMTRFabricStorageDataSource> *)storageDataSourceForFabricWithID:(NSNumber *)arg1;
- (void)updateKeyValueStore:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateKeyValueStore:(void *)arg1 forFabricWithID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
