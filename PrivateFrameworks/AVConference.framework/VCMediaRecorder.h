
@interface VCMediaRecorder : VCObject <VCMediaRecorderProtocol> {
    unsigned long long  _bufferResets;
    unsigned int  _capabilities;
    int  _currentActiveRequestsCount;
    unsigned int  _currentTimestamp;
    id  _delegate;
    bool  _isActive;
    bool  _isClientRegistered;
    double  _lastHealthPrintCallAbsoluteSeconds;
    bool  _lastRequest;
    unsigned long long  _localAudioCallbacksClearedCount;
    unsigned long long  _localAudioCallbacksCount;
    unsigned long long  _localVideoCallbacksClearedCount;
    unsigned long long  _localVideoCallbacksCount;
    VCMediaRecorderHistory * _mediaRecorderHistory;
    unsigned char  _mode;
    unsigned long long  _remoteAudioCallbacksClearedCount;
    unsigned long long  _remoteAudioCallbacksCount;
    NSMutableSet * _requests;
    unsigned int  _streamToken;
    VideoAttributes * _targetScreenAttributes;
    id  _transportDelegate;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
}

@property (nonatomic) unsigned int capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageType;
@property (nonatomic, readonly) bool isActive;
@property (readonly) Class superclass;
@property (nonatomic, retain) VideoAttributes *targetScreenAttributes;
@property (nonatomic) int videoCodec;

+ (unsigned long long)countForRequestType:(int)arg1;
+ (unsigned long long)deviceFreeDiskSpace;
+ (bool)deviceHasSufficientFreeSpace;
+ (id)stringFromMediaType:(unsigned char)arg1;
+ (int)typeForRequest:(id)arg1;

- (void)_generateRequest:(unsigned char)arg1 requestState:(unsigned char)arg2 transactionID:(id)arg3 timestamp:(unsigned int)arg4;
- (unsigned int)capabilities;
- (void)cleanupActiveRequests;
- (void)dealloc;
- (void)deregisterClient;
- (unsigned long long)directorySize:(id)arg1;
- (void)getInitialRemoteScreenAttributes:(id)arg1;
- (void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2;
- (int)imageType;
- (id)initWithStreamToken:(unsigned int)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting { }*)arg3;
- (void)invalidate;
- (bool)isActive;
- (bool)isHistorySupported;
- (id)mediaRecorderDelegate;
- (void)notifyFinishWithRequest:(id)arg1 didSucceed:(bool)arg2 fileSize:(long long)arg3;
- (void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(bool)arg2;
- (void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(bool)arg2 fileSize:(long long)arg3;
- (bool)processClientRequest:(id)arg1 error:(id*)arg2;
- (void)processRemoteLivePhotoRequest:(id)arg1;
- (void)processRemotePhotoRequest:(id)arg1;
- (void)processRemoteRequest:(id)arg1 withMediaType:(unsigned char)arg2;
- (void)processRequest:(id)arg1;
- (void)registerClient;
- (void)reportingMediaRecorderWithRequest:(id)arg1 fileLength:(double)arg2 fileSize:(unsigned long long)arg3;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setFrameRate:(float)arg1;
- (void)setImageType:(int)arg1;
- (void)setMediaRecorderDelegate:(id)arg1;
- (void)setTargetScreenAttributes:(id)arg1;
- (void)setTransportDelegate:(id)arg1;
- (void)setUpReportingAgent;
- (void)setVideoCodec:(int)arg1;
- (id)targetScreenAttributes;
- (id)transportDelegate;
- (void)updateActiveStatus;
- (bool)validateIncomingRequest:(id)arg1;
- (void)validateNonzeroAudioRecordingLengthURL:(id)arg1 error:(id*)arg2;
- (bool)validateNumberOfRequestsWithError:(id*)arg1;
- (int)videoCodec;

@end
