
@interface VCVirtualAVCaptureSession : AVCaptureSession {
    NSMutableArray * _batchedConfigurations;
    unsigned int  _configurationCount;
    NSMutableSet * _connections;
    NSMutableSet * _inputs;
    bool  _isRunning;
    NSMutableSet * _outputs;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

- (void)addConnection:(id)arg1;
- (void)addConnectionWithInput:(id)arg1 output:(id)arg2;
- (void)addInput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)beginConfiguration;
- (bool)canAddInput:(id)arg1;
- (bool)canAddOutput:(id)arg1;
- (void)commitConfiguration;
- (bool)connectionExists:(id)arg1 output:(id)arg2;
- (id)connections;
- (void)dealloc;
- (id)init;
- (id)inputs;
- (id)newConnectionWithInputPorts:(id)arg1 outputDevice:(id)arg2;
- (id)outputs;
- (void)postNotification:(id)arg1;
- (void)pushConfigurationBlock:(id /* block */)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (int)startInputDevices;
- (void)startRunning;
- (int)stopInputDevices;
- (void)stopRunning;
- (bool)supportsAVCaptureSessionPreset;

@end
