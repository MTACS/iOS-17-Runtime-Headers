
@interface NSSQLBatchInsertRequestContext : NSSQLBatchOperationRequestContext

- (bool)executeRequestCore:(id*)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;

@end
