
@interface CMContinuityCaptureAVCaptureAudioSession : CMContinuityCaptureAVCaptureBaseSession {
    AVCaptureSession * _captureSession;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
    long long  _transport;
}

- (void).cxx_destruct;
- (void)configureSessionWithInput:(id)arg1 andOutput:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
