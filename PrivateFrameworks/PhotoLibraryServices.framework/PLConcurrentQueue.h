
@interface PLConcurrentQueue : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableArray * _internalQueue_pendingBlocks;
    long long  _internalQueue_usedWidth;
    NSObject<OS_dispatch_queue> * _targetQueue;
    long long  _width;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) long long width;

- (void).cxx_destruct;
- (void)_internalQueue_tryDispatchingNextPendingBlock;
- (void)dispatchAsync:(id /* block */)arg1;
- (id)init;
- (id)initWithTargetQueue:(id)arg1 width:(long long)arg2;
- (id)targetQueue;
- (long long)width;

@end
