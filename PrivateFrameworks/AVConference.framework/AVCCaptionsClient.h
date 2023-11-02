
@interface AVCCaptionsClient : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    long long  _streamToken;
}

@property (readonly) bool captionsEnabled;
@property (readonly) bool captionsSupported;
@property (readonly) <AVCCaptionsClientDelegate> *delegate;
@property (readonly) long long streamToken;

+ (bool)isCaptioningSupported;

- (bool)captionsEnabled;
- (id)captionsResultsWithInternalResults:(id)arg1;
- (bool)captionsSupported;
- (void)configureCaptions:(id)arg1;
- (bool)connect;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (void)didDetectGibberish:(bool)arg1;
- (void)didDisableCaptions:(bool)arg1 error:(id)arg2;
- (void)didEnableCaptions:(bool)arg1 error:(id)arg2;
- (void)didStartCaptioningWithReason:(unsigned char)arg1;
- (void)didStopCaptioningWithReason:(unsigned char)arg1;
- (void)didUpdateCaptions:(id)arg1 isRemote:(bool)arg2;
- (void)disconnect;
- (void)enableCaptions:(bool)arg1;
- (id)initWithDelegate:(id)arg1 streamToken:(long long)arg2;
- (void)registerBlocksForNotifications;
- (long long)streamToken;

@end
