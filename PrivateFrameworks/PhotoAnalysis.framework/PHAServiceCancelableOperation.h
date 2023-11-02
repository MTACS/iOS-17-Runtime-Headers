
@interface PHAServiceCancelableOperation : NSObject {
    bool  _cancelRequested;
    id /* block */  _cancellationBlock;
    NSObject<OS_dispatch_group> * _completionGroup;
    <PHAServiceOperationListener> * _delegate;
    NSInvocation * _invocation;
    long long  _operationId;
    id /* block */  _progressBlock;
}

@property <PHAServiceOperationListener> *delegate;
@property (readonly) NSInvocation *invocation;
@property (readonly) bool isCancelled;
@property (readonly) long long operationId;
@property (copy) id /* block */ progressBlock;

+ (id)operationNotFoundError:(long long)arg1;

- (void).cxx_destruct;
- (void)_startWork;
- (void)addCompletionBlock:(id /* block */)arg1;
- (bool)cancel;
- (id)delegate;
- (id)description;
- (void)enqueueOnQueue:(id)arg1;
- (id)initWithOperationId:(long long)arg1 invocation:(id)arg2;
- (id)invocation;
- (bool)isCancelled;
- (id)operationCanceledError:(bool)arg1;
- (long long)operationId;
- (id /* block */)progressBlock;
- (void)runOperation;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)waitForCompletion;

@end
