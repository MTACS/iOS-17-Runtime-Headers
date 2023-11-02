
@interface AVCScreenCapture : NSObject {
    NSObject<OS_dispatch_queue> * _avConferenceScreenCaptureQueue;
    long long  _captureSourceID;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    bool  _isInProcess;
    VCScreenShare * _screenShare;
}

@property (nonatomic, readonly) long long captureSourceID;
@property (nonatomic, readonly) <AVCScreenCaptureDelegate> *delegate;

+ (unsigned char)capabilities;
+ (unsigned char)captureCapabilities;

- (long long)captureSourceID;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (id)initWithDelegate:(id)arg1 withConfig:(id)arg2;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (void)registerBlocksForNotifications;
- (void)reportScreenShareIsStarting:(bool)arg1;
- (void)startCapture;
- (void)stopCapture;
- (id)updateScreenCaptureWithConfig:(id)arg1;

@end
