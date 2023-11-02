
@interface HKRetryableOperation : NSObject {
    NSMutableArray * _pendingOperations;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _retryCount;
}

@property (nonatomic, readonly, copy) NSMutableArray *pendingOperations;

- (void).cxx_destruct;
- (void)_queue_performPendingOperation:(id)arg1;
- (void)_queue_performRetryableOperation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 retryCount:(int)arg2;
- (id)pendingOperations;

@end
