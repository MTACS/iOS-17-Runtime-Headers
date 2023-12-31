
@interface TROperationQueue : NSOperationQueue {
    NSObject<OS_dispatch_queue> * _cancellationQ;
    bool  _cancelled;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cancellationQ;
@property (getter=isCancelled) bool cancelled;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (id)cancellationQ;
- (id)init;
- (void)invalidate;
- (bool)isCancelled;
- (void)setCancellationQ:(id)arg1;
- (void)setCancelled:(bool)arg1;

@end
