
@interface PLEnumerateAndSaveController : NSObject {
    _Atomic bool  _cancelled;
    bool  _concurrent;
    id /* block */  _didFetchObjectIDsBlock;
    NSError * _firstError;
    id /* block */  _generateContextBlock;
    long long  _itemsPerBatch;
    PLPhotoLibraryBundle * _libraryBundle;
    NSString * _operationName;
    NSOperationQueue * _operationQueue;
    NSManagedObjectContext * _originalContext;
    NSFetchRequest * _originalFetchRequest;
    PLPhotoLibraryPathManager * _pathManager;
    id /* block */  _processResultBlock;
    id /* block */  _processResultsBlock;
    bool  _refreshesAllAfterSave;
    bool  _succeeded;
}

@property (nonatomic) bool concurrent;
@property (nonatomic, copy) id /* block */ didFetchObjectIDsBlock;
@property (nonatomic, retain) NSError *firstError;
@property (nonatomic, copy) id /* block */ generateContextBlock;
@property (nonatomic) long long itemsPerBatch;
@property (nonatomic, retain) PLPhotoLibraryBundle *libraryBundle;
@property (nonatomic, retain) NSString *operationName;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSManagedObjectContext *originalContext;
@property (nonatomic, retain) NSFetchRequest *originalFetchRequest;
@property (nonatomic, retain) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic, copy) id /* block */ processResultBlock;
@property (nonatomic, copy) id /* block */ processResultsBlock;
@property (nonatomic) bool refreshesAllAfterSave;
@property (nonatomic) bool succeeded;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 pathManager:(id)arg4 concurrent:(bool)arg5 refreshAllAfterSave:(bool)arg6 generateContextBlock:(id /* block */)arg7 didFetchObjectIDsBlock:(id /* block */)arg8 processResultBlock:(id /* block */)arg9 processResultsBlock:(id /* block */)arg10;
- (void)_inq_runOperationWithObjectIDs:(id)arg1 onContext:(id)arg2;
- (bool)concurrent;
- (id /* block */)didFetchObjectIDsBlock;
- (id)firstError;
- (id /* block */)generateContextBlock;
- (id)initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 pathManager:(id)arg4 concurrent:(bool)arg5 refreshAllAfterSave:(bool)arg6 generateContextBlock:(id /* block */)arg7 didFetchObjectIDsBlock:(id /* block */)arg8 processResultBlock:(id /* block */)arg9;
- (id)initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 pathManager:(id)arg4 concurrent:(bool)arg5 refreshAllAfterSave:(bool)arg6 generateContextBlock:(id /* block */)arg7 didFetchObjectIDsBlock:(id /* block */)arg8 processResultsBlock:(id /* block */)arg9;
- (long long)itemsPerBatch;
- (id)libraryBundle;
- (id)operationName;
- (id)operationQueue;
- (id)originalContext;
- (id)originalFetchRequest;
- (id)pathManager;
- (bool)processObjectsWithError:(id*)arg1;
- (id /* block */)processResultBlock;
- (id /* block */)processResultsBlock;
- (bool)refreshesAllAfterSave;
- (void)setConcurrent:(bool)arg1;
- (void)setDidFetchObjectIDsBlock:(id /* block */)arg1;
- (void)setFirstError:(id)arg1;
- (void)setGenerateContextBlock:(id /* block */)arg1;
- (void)setItemsPerBatch:(long long)arg1;
- (void)setLibraryBundle:(id)arg1;
- (void)setOperationName:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setOriginalContext:(id)arg1;
- (void)setOriginalFetchRequest:(id)arg1;
- (void)setPathManager:(id)arg1;
- (void)setProcessResultBlock:(id /* block */)arg1;
- (void)setProcessResultsBlock:(id /* block */)arg1;
- (void)setRefreshesAllAfterSave:(bool)arg1;
- (void)setSucceeded:(bool)arg1;
- (bool)succeeded;

@end
