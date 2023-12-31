
@interface FPOperation : NSOperation <FPOperationClient> {
    id  _executionTransaction;
    bool  _finished;
    id /* block */  _finishedBlock;
    NSObject<OS_dispatch_queue> * _queue;
    <FPCancellable> * _remoteOperation;
    unsigned char  _uuid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (getter=isExecuting, readonly) bool executing;
@property (getter=isFinished, readonly) bool finished;
@property (copy) id /* block */ finishedBlock;
@property (nonatomic, retain) <FPCancellable> *remoteOperation;

- (void).cxx_destruct;
- (bool)_finishIfCancelled;
- (void)_setExecuting:(bool)arg1;
- (void)_setFinished:(bool)arg1;
- (void)_setRemoteCancellationHandler:(id)arg1;
- (id)callbackQueue;
- (void)cancel;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)finishIfCancelled;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id /* block */)finishedBlock;
- (id)init;
- (void)invalidate;
- (bool)isExecuting;
- (bool)isFinished;
- (id)operationDescription;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)proxifiedDescription;
- (id)remoteOperation;
- (void)resetRemoteOperation;
- (void)setCallbackQueue:(id)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setFinishedBlock:(id /* block */)arg1;
- (void)setRemoteOperation:(id)arg1;
- (void)start;

@end
