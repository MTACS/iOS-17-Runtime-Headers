
@interface CPSPromise : NSObject {
    NSMutableArray * _completionBlocks;
    NSError * _error;
    id  _result;
    NSConditionLock * _stateLock;
}

+ (id)promise;

- (void).cxx_destruct;
- (void)_finishWithResult:(id)arg1 error:(id)arg2;
- (void)_flushCompletionBlocks;
- (bool)_isFinished;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (id)init;

@end
