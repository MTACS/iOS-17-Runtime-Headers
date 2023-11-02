
@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {
    int  _flags;
    id  _requestCompletionBlock;
    NSManagedObjectContext * _requestContext;
    NSError * _requestError;
    NSProgress * _requestProgress;
}

@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (retain) NSError *operationError;
@property (readonly) NSProgress *progress;

- (void)_cancelProgress;
- (bool)_isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3;
- (id)managedObjectContext;
- (id)operationError;
- (id)progress;
- (void)setOperationError:(id)arg1;

@end
