
@interface FBSDispatchSerialQueue : FBSSerialQueue {
    bool  _main;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)performAfter:(double)arg1 withBlock:(id /* block */)arg2;
- (void)performAsync:(id /* block */)arg1;
- (void)performAsync:(id /* block */)arg1 withHandoff:(id)arg2;

@end
