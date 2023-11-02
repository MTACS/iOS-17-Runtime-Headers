
@interface AWPearlAttentionStreamer : NSObject <BKDevicePearlDelegate, BKFaceDetectOperationDelegate, StreamingOperation> {
    int  _attentionAwareFeaturesEnabledNotification;
    bool  _attentionStreamerRunning;
    id /* block */  _callbackBlock;
    int  _displayNotifyToken;
    bool  _displayOn;
    bool  _eyeReliefStarted;
    BKFaceDetectOperation * _finishingPresenceOperation;
    bool  _isAttentionAwareFeaturesEnabled;
    id /* block */  _notificationBlock;
    BKDevicePearl * _pearlDevice;
    BKFaceDetectOperation * _pendingPresenceOperation;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _sem;
    bool  _smartCoverClosed;
    bool  _unitTest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)attentionStreamerRunning;
- (id)cancelEventStream;
- (struct { bool x1; bool x2; })getStreamerOptions;
- (id)initForUnitTest:(bool)arg1 queue:(id)arg2;
- (bool)isAttentionAwareFeaturesEnabled;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)sendNotification:(unsigned long long)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setDisplayStateFromNotification;
- (void)setIsAttentionAwareFeaturesEnabled:(bool)arg1;
- (void)setNotificationHandler:(id /* block */)arg1;
- (void)setSmartCoverState:(bool)arg1;
- (id)streamEventWithBlock:(id /* block */)arg1 options:(struct { bool x1; bool x2; })arg2;
- (id)unitTestDevice;

@end
