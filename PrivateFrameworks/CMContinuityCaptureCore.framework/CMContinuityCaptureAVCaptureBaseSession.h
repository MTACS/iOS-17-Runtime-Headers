
@interface CMContinuityCaptureAVCaptureBaseSession : NSObject <CMContinuityCaptureAVCaptureSession> {
    AVCaptureSession * _captureSession;
    long long  _clientDeviceModel;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
    long long  _transport;
}

@property (readonly, retain) AVCaptureSession *captureSession;
@property long long clientDeviceModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (readonly) struct OpaqueCMClock { }*synchronizationClock;
@property long long transport;

- (void).cxx_destruct;
- (id)captureSession;
- (long long)clientDeviceModel;
- (void)dealloc;
- (void)didConfigure;
- (void)handleCaptureSessionNotification:(id)arg1;
- (id)initWithCaptureSession:(id)arg1 queue:(id)arg2;
- (id)queue;
- (void)setClientDeviceModel:(long long)arg1;
- (void)setTransport:(long long)arg1;
- (void)start;
- (long long)state;
- (void)stop;
- (struct OpaqueCMClock { }*)synchronizationClock;
- (long long)transport;
- (void)willConfigure;

@end
