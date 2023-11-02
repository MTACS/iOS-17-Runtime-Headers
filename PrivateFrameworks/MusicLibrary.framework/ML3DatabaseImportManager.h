
@interface ML3DatabaseImportManager : NSObject {
    NSOperationQueue * _importOperationQueue;
    NSError * _lastImportError;
    NSMutableArray * _suspendedImportOperations;
}

@property (nonatomic, retain) NSError *lastImportError;
@property (nonatomic, readonly) unsigned long long operationsCount;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;
@property (nonatomic, readonly) unsigned long long suspendedOperationsCount;

- (void).cxx_destruct;
- (void)_handleImportOperationCancelled:(id)arg1;
- (void)_handleImportOperationCompleted:(id)arg1;
- (id)_importOperations;
- (id)_suspendedImportOperations;
- (void)cancelAllImportOperations;
- (void)cancelImportOperationsForSource:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)cancelImportOperationsOriginatingFromClient:(id)arg1;
- (float)currentOperationProgressWithError:(id*)arg1;
- (id)init;
- (bool)isSuspended;
- (id)lastImportError;
- (unsigned long long)operationsCount;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 progressBlock:(id /* block */)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)resumeSuspendedImportOperations;
- (void)setLastImportError:(id)arg1;
- (void)suspendImportOperations;
- (unsigned long long)suspendedOperationsCount;

@end
