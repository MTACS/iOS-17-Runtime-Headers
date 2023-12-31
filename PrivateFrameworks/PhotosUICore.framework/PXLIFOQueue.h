
@interface PXLIFOQueue : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableArray * _internalQueue_pendingBlocks;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (void)_executeNextPendingBlock;
- (void)dispatchAsync:(id /* block */)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (id)targetQueue;

@end
