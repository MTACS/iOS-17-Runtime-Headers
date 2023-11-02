
@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(id /* block */)arg1;
- (void)performAsync:(id /* block */)arg1 withHandoff:(id)arg2;

@end
