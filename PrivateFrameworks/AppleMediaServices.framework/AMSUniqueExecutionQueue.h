
@interface AMSUniqueExecutionQueue : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _completionCallbacksQueue;
    NSObject<OS_dispatch_queue> * _executeBlockQueue;
    AMSPromise * _executionPromise;
    NSObject<OS_dispatch_queue> * _executionPromiseAccessQueue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionCallbacksQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (nonatomic, retain) AMSPromise *executionPromise;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue;

- (void).cxx_destruct;
- (void)_beginExecutingBlockWithPromise:(id)arg1;
- (id)_createExecutionPromise;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addCompletionBlockForSubsequentExecution:(id /* block */)arg1;
- (id /* block */)block;
- (id)completionCallbacksQueue;
- (id)executeBlockQueue;
- (id)executionPromise;
- (id)executionPromiseAccessQueue;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setCompletionCallbacksQueue:(id)arg1;
- (void)setExecuteBlockQueue:(id)arg1;
- (void)setExecutionPromise:(id)arg1;

@end
