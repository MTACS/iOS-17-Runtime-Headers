
@interface _HMCameraStreamControl : _HMCameraControl <HMFLogging> {
    HMCameraStream * _cameraStream;
    <_HMCameraStreamControlDelegate> * _delegate;
    NSString * _streamSessionID;
    unsigned long long  _streamState;
}

@property (readonly) HMCameraStream *cameraStream;
@property (readonly, copy) NSString *debugDescription;
@property <_HMCameraStreamControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *streamSessionID;
@property unsigned long long streamState;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callVideoStartedDelegate;
- (void)_callVideoStoppedDelegate:(id)arg1;
- (void)_handleStreamStartedWithResponse:(id)arg1 sessionID:(id)arg2 error:(id)arg3;
- (void)_handleVideoStopResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_handleVideoStreamStopped:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_resetStateWithError:(id)arg1;
- (id)cameraStream;
- (void)dealloc;
- (id)delegate;
- (id)initWithCameraProfile:(id)arg1 profileUniqueIdentifier:(id)arg2;
- (void)setCameraStream:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStreamSessionID:(id)arg1;
- (void)setStreamState:(unsigned long long)arg1;
- (void)startStreamWithPreferences:(id)arg1;
- (void)stopStream;
- (id)streamSessionID;
- (unsigned long long)streamState;

@end
