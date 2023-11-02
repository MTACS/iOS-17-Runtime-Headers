
@interface NSSQLBatchDeleteRequestContext : NSSQLBatchOperationRequestContext {
    NSArray * _deleteStatements;
    NSArray * _deletedObjectIDs;
    NSArray * _externalDataReferenceTriggerStatements;
    NSArray * _externalDataReferencesToDelete;
    NSSQLFetchRequestContext * _fetchContext;
    NSFetchRequest * _fetchRequestForObjectsToDelete;
    NSArray * _fileBackedFuturesToDelete;
}

@property (nonatomic, readonly) NSBatchDeleteRequest *request;

- (void)dealloc;
- (void)executePrologue;
- (bool)executeRequestCore:(id*)arg1;
- (bool)isWritingRequest;
- (id)request;

@end
