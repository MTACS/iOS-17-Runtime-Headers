
@interface AWPearlAttentionSampler : AWAttentionSampler <CARSessionObserving, PearlCameraInterfaceMessaging> {
    bool  _carPlayConnected;
    CARSessionStatus * _carSessionStatus;
    <SamplingOperation> * _currentOperation;
    struct { 
        bool AWAttentionSamplerActivateAttentionDetection; 
        bool AWAttentionSamplerActivateMotionDetection; 
    }  _currentOptions;
    int  _displayNotifyToken;
    bool  _displayState;
    <SamplingOperation> * _finishingOperation;
    unsigned long long  _lastErrorTime;
    unsigned long long  _operationCreateTime;
    NSObject<OS_dispatch_source> * _operationStalledTimer;
    bool  _smartCoverClosed;
    bool  _unitTest;
    <SamplingOperation> * _unitTestOperation;
    bool  _useAVFoundation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraActivityNotification:(int)arg1 data:(union { struct AWFaceDetectMetadata { bool x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; unsigned long long x_1_1_5; double x_1_1_6; unsigned long long x_1_1_7; double x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10[16]; } x1; int x2; int x3; int x4; }*)arg2 forOperation:(id)arg3;
- (void)cancelFaceDetect:(id)arg1;
- (void)cancelStalledTimer;
- (id)createNewSamplingOperation;
- (int)currentState;
- (void)faceDetectStalled:(id)arg1;
- (void)finishingFaceDetect:(id)arg1;
- (id)initForUnitTest:(bool)arg1 useAVFoundation:(bool)arg2;
- (id)initWithOptions:(id)arg1;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1 ignoreDisplayState:(bool)arg2;
- (void)pearlAttentionSamplerErrorOccurred;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)setCarplayStateFromNotification:(bool)arg1;
- (void)setCurrentState:(int)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setDisplayStateFromNotification;
- (void)setSmartCoverClosed:(bool)arg1;
- (void)shouldSample:(bool)arg1 withDeadline:(unsigned long long)arg2 withOptions:(struct { bool x1; bool x2; })arg3;
- (void)startStalledTimerForOperation:(id)arg1;
- (void)triggerFaceDetectWithDeadline:(unsigned long long)arg1 options:(struct { bool x1; bool x2; })arg2;
- (id)unitTestSampler;
- (void)updateFaceState:(int)arg1;
- (void)updateFaceState:(int)arg1 withFaceMetadata:(struct AWFaceDetectMetadata { bool x1; double x2; double x3; double x4; unsigned long long x5; double x6; unsigned long long x7; double x8; unsigned long long x9; float x10[16]; }*)arg2;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;
- (void)updateSuppressedMaskWithDisplayState:(bool)arg1 smartCoverClosed:(bool)arg2 carPlayConnected:(bool)arg3;

@end
