
@interface IMPurgableObject : NSObject {
    id /* block */  _cleanupBlock;
    id  _instanceObject;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _setupBlock;
}

- (void).cxx_destruct;
- (void)_cleanupInstance;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)_setupInstance;
- (void)dealloc;
- (id)initWithSetupBlock:(id /* block */)arg1 cleanupBlock:(id /* block */)arg2 queue:(id)arg3;
- (id)instance;

@end
