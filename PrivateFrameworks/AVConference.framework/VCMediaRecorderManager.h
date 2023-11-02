
@interface VCMediaRecorderManager : NSObject <VCMediaRecorderDelegate> {
    id  _delegate;
    NSMutableDictionary * _streamTokenList;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCMediaRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksFromService;
- (void)dispatchedRegisterMediaRecorder:(id)arg1 withStreamToken:(long long)arg2;
- (void)dispatchedUnregisterMediaRecorderWithStreamToken:(long long)arg1;
- (id)init;
- (id)mediaRecorderFromClientContext:(id)arg1;
- (id)newClientContextWithStreamToken:(long long)arg1 error:(id*)arg2;
- (id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2;
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)registerBlocksForService;
- (void)registerMediaRecorder:(id)arg1 withStreamToken:(long long)arg2;
- (void)saveImage:(id)arg1 movie:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(bool)arg3;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;
- (void)unregisterMediaRecorderWithStreamToken:(long long)arg1;

@end
