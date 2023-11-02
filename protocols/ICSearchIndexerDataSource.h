
@protocol ICSearchIndexerDataSource <NSObject>

@required

- (NSArray *)allIndexableObjectIDsInReversedReindexingOrderWithContext:(NSManagedObjectContext *)arg1;
- (void)clearObjectIDsToProcess;
- (NSString *)dataSourceIdentifier;
- (long long)decisionOnObjectID:(NSManagedObjectID *)arg1 searchableItemToIndex:(id*)arg2 additionalItemsToIndex:(id*)arg3 objectIDURIToDelete:(id*)arg4 additionalUniqueIdentifiersToDelete:(id*)arg5 context:(NSManagedObjectContext *)arg6;
- (NSArray *)indexableObjectIDsWithURIs:(NSArray *)arg1 context:(NSManagedObjectContext *)arg2;
- (unsigned long long)indexingPriority;
- (bool)isObservingChanges;
- (bool)needsReindexing;
- (NSManagedObjectContext *)newManagedObjectContext;
- (<ICSearchIndexable> *)objectForManagedObjectIDURI:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;
- (<ICSearchIndexable> *)objectForSearchableItem:(CSSearchableItem *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSArray *)objectIDsNeedingProcessing;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerDidFinishIndexingObjectIDs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(NSArray *)arg1;
- (void)searchIndexerWillIndexObjectIDs:(NSArray *)arg1;
- (void)stageForReindexingWithContext:(NSManagedObjectContext *)arg1;
- (void)stageObjectIDURIsForIndexing:(NSArray *)arg1 context:(NSManagedObjectContext *)arg2;
- (void)startObservingChanges;
- (void)stopObservingChanges;
- (NSString *)uuid;

@end
