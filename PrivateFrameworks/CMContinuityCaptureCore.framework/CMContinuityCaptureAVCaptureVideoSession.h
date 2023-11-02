
@interface CMContinuityCaptureAVCaptureVideoSession : CMContinuityCaptureAVCaptureBaseSession {
    NSMutableArray * _connectionEntities;
    NSMutableArray * _connections;
    AVCaptureDeviceInput * _videoCameraInput;
    AVCaptureVideoPreviewLayer * _videoPreviewLayer;
}

@property (getter=isMulticamSession, readonly) bool multicamSession;
@property (retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;

- (void).cxx_destruct;
- (void)addConnections:(id)arg1;
- (void)dealloc;
- (bool)hasConnectionsForEntity:(long long)arg1;
- (id)initWithQueue:(id)arg1 requiresMulticamSession:(bool)arg2;
- (bool)isMulticamSession;
- (void)removeConnections:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)start;
- (void)stop;
- (id)videoPreviewLayer;

@end
