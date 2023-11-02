
@interface BiokitOperation : NSObject <BKDevicePearlDelegate, BKFaceDetectOperationDelegate, SamplingOperation> {
    <PearlCameraInterfaceMessaging> * _delegate;
    BKFaceDetectOperation * _finishingPresenceOperation;
    BKDevicePearl * _pearlDevice;
    BKFaceDetectOperation * _pendingPresenceOperation;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)State;
- (double)Timeout;
- (id)cancelActiveOperation:(id)arg1;
- (id)createPresenceDetectOperationWithTimeout:(double)arg1 options:(struct { bool x1; bool x2; })arg2;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
- (id)initWithQueue:(id)arg1 forUnitTest:(bool)arg2;
- (bool)isOperationActive;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 motionDetectStateChanged:(id)arg2;
- (int)operationBackend;
- (void)setDelegate:(id)arg1;
- (id)startPresenceDetectOperation;
- (id)unitTestSampler;

@end
