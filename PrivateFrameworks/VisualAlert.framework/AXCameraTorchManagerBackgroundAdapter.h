
@interface AXCameraTorchManagerBackgroundAdapter : NSObject {
    NSObject<OS_dispatch_queue> * _q;
    <AXCameraTorchManager> * _synchronousManager;
}

@property (nonatomic, readonly) <AXCameraTorchManager> *synchronousTorchManager;

- (void).cxx_destruct;
- (void)closeTorchDeviceWithCompletion:(id /* block */)arg1;
- (id)initWithCameraTorchManager:(id)arg1;
- (void)openTorchDeviceWithCompletion:(id /* block */)arg1;
- (id)synchronousTorchManager;
- (void)turnTorchOffWithCompletion:(id /* block */)arg1;
- (void)turnTorchOnWithCompletion:(id /* block */)arg1;

@end
