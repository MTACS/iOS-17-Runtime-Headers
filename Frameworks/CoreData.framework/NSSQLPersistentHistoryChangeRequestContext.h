
@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest * _fetchRequest;
    bool  _shouldUseBatches;
}

@property (nonatomic, readonly) NSPersistentHistoryChangeRequest *request;
@property (nonatomic, readonly) bool shouldUseBatches;

- (id)createCountRequestContextForChanges;
- (id)createDeleteTransactionsRequestContext;
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;
- (void)dealloc;
- (void)executePrologue;
- (bool)executeRequestUsingConnection:(id)arg1;
- (id)fetchRequestContextForChanges;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)request;
- (bool)shouldUseBatches;

@end
