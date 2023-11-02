
@interface NSSQLBatchUpdateRequestContext : NSSQLBatchOperationRequestContext {
    NSFetchRequest * _fetchRequest;
    NSSQLiteStatement * _updateStatement;
}

@property (nonatomic, readonly) NSBatchUpdateRequest *request;

- (id)createFetchRequestContextForObjectsToUpdate;
- (void)dealloc;
- (void)executePrologue;
- (bool)executeRequestCore:(id*)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)request;

@end
