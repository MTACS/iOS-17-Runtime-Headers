
@interface APEndpointStreamScreenAVCWrapper : NSObject <AVCVideoStreamDelegate> {
    AVCMediaStreamNegotiator * _avcMediaStreamNegotiator;
    AVCMediaStreamNegotiator * _avcMediaStreamNegotiatorHDR;
    AVCVideoStream * _avcVideoStream;
    int  _clientPID;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    int  _didStartStatus;
    int (* _eventHandleFailed;
    int (* _eventHandleStart;
    int (* _eventHandleStop;
    void * _eventWeakContext;
    unsigned char  _isSubFrameEnabled;
    AVCMediaStreamConfig * _videoStreamConfig;
    AVCMediaStreamConfig * _videoStreamConfigHDR;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)convertHDRMode:(struct __CFString { }*)arg1;
- (int)createVideoStreamConfig:(id*)arg1 withDirection:(long long)arg2 screenOptions:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; int x2; id x3; id x4; unsigned char x5; struct __CFString {} *x6; id x7; }*)arg3 previousConfig:(id)arg4;
- (void)dealloc;
- (int)getClientUPID:(unsigned long long*)arg1;
- (void)getVideoResolutionFromOptions:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; int x2; id x3; id x4; unsigned char x5; struct __CFString {} *x6; id x7; }*)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3;
- (void)handleFailureWithError:(int)arg1 reason:(struct __CFString { }*)arg2;
- (id)initWithClientPID:(struct __CFNumber { }*)arg1 hdrMode:(struct __CFString { }*)arg2 presentationMode:(bool)arg3 eventHandlers:(struct { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); })arg4 error:(int*)arg5;
- (int)initializeNegotiatorWithMode:(struct __CFString { }*)arg1 presentationMode:(bool)arg2;
- (unsigned char)isConfigPresentForPresentationMode:(unsigned char)arg1;
- (id)negotiationDataForPresentationMode:(unsigned char)arg1;
- (int)restartWithScreenOptions:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; int x2; id x3; id x4; unsigned char x5; struct __CFString {} *x6; id x7; }*)arg1 negotiatedBlob:(id)arg2;
- (int)start;
- (int)startWithNWConnectionClientID:(unsigned char)arg1 negotiatedBlob:(id)arg2 screenOptions:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; int x2; id x3; id x4; unsigned char x5; struct __CFString {} *x6; id x7; }*)arg3 completion:(struct { int (*x1)(); void *x2; int x3; }*)arg4;
- (int)stop;
- (void)stopWithCompletion:(struct { int (*x1)(); void *x2; int x3; }*)arg1;
- (void)stream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;

@end
