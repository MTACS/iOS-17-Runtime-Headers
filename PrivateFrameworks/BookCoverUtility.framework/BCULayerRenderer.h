
@interface BCULayerRenderer : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _completionQueue;
    <MTLDevice> * _device;
    NSHashTable * _operations;
    <MTLCommandQueue> * _queue;
    NSObject<OS_dispatch_queue> * _renderQueue;
    CARenderer * _renderer;
    bool  _suspended;
}

- (void).cxx_destruct;
- (void)_disconnectLayer:(id)arg1;
- (void)_processOperations;
- (void)_startOperation:(id)arg1;
- (id)init;
- (id)initWithSuspended:(bool)arg1;
- (id)newOperationWithPriority:(float)arg1 renderLayer:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)newOperationWithPriority:(float)arg1 waitForCPUSynchronization:(bool)arg2 logKey:(id)arg3 renderLayer:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)resume;
- (void)suspend;

@end
