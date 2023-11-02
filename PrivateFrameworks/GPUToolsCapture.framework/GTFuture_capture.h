
@interface GTFuture_capture : NSOperation {
    bool  _cancelled;
    id /* block */  _completion;
    NSCondition * _condition;
    NSError * _error;
    NSMutableArray * _inflightDependencies;
    NSMutableArray * _notifyList;
    long long  _priority;
    bool  _resolved;
    id  _result;
    bool  _started;
    NSTimer * _timeout;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)future;
+ (id)futureWithResult:(id)arg1 error:(id)arg2;
+ (bool)logPerformance;

- (void)_addDependency_REQUIRESLOCK:(id)arg1;
- (id)_dependencies_NOLOCK;
- (void)_setResult:(id)arg1 error:(id)arg2 notify_NOLOCK:(bool)arg3;
- (void)_start_NOLOCK;
- (bool)_waitForDependencies_REQUIRESLOCK;
- (void)addDependency:(id)arg1;
- (void)addResultHandler:(id /* block */)arg1;
- (bool)boolResult;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)dependencies;
- (id)error;
- (id)init;
- (int)intResult;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)notifyGroup:(id)arg1;
- (void)notifyOnQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)queuePriority;
- (void)requestResult:(id /* block */)arg1;
- (void)resolveWithFuture:(id)arg1;
- (id)result;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setQueuePriority:(long long)arg1;
- (void)setResult:(id)arg1;
- (void)start;
- (void)timeoutAfter:(double)arg1 label:(id)arg2;
- (unsigned int)uint32Result;
- (void)waitUntilFinished;
- (void)waitUntilResolved;

@end
