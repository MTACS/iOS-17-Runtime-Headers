
@interface FBSWorkspaceServiceDispatchingQueue : NSObject <BSServiceDispatchingQueue> {
    FBSSerialQueue * _callOutQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithTargetQueue:(id)arg1 callOutQueue:(id)arg2;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(id /* block */)arg1;
- (void)performAsync:(id /* block */)arg1 withHandoff:(id)arg2;

@end
