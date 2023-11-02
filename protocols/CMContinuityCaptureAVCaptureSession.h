
@protocol CMContinuityCaptureAVCaptureSession <NSObject>

@required

- (AVCaptureSession *)captureSession;
- (long long)clientDeviceModel;
- (void)didConfigure;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setClientDeviceModel:(long long)arg1;
- (void)setTransport:(long long)arg1;
- (void)start;
- (long long)state;
- (void)stop;
- (struct OpaqueCMClock { }*)synchronizationClock;
- (long long)transport;
- (void)willConfigure;

@end
