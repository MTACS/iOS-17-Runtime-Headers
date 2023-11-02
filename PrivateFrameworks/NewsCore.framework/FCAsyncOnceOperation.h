
@interface FCAsyncOnceOperation : NSObject {
    NSObject<OS_dispatch_group> * _activeGroup;
    <FCOperationCanceling><FCOperationPrioritizing> * _activeOperation;
    bool  _finished;
    unsigned long long  _interest;
    NFMutexLock * _lock;
    long long  _relativePriority;
    bool  _succeeded;
    id /* block */  _workBlock;
}

@property (nonatomic, readonly) bool finishedExecuting;
@property (nonatomic, readonly) bool finishedExecutingWithFailure;

- (void).cxx_destruct;
- (id)executeWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)executeWithCompletionHandler:(id /* block */)arg1;
- (bool)finishedExecuting;
- (bool)finishedExecutingWithFailure;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)setRelativePriority:(long long)arg1;

@end
