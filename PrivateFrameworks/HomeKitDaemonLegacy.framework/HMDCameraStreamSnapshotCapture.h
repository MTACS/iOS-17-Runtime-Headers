
@interface HMDCameraStreamSnapshotCapture : HMFObject <HMDVideoStreamLastDecodedFrameDelegate, HMFLogging, HMFTimerDelegate> {
    bool  _capturingCurrentFrame;
    bool  _capturingLastFrame;
    <HMDCameraStreamSnapshotCaptureDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMFTimer * _lastDecodedFrameTimer;
    HMDCameraStreamSessionID * _streamSessionID;
    HMDVideoStreamInterface * _videoStreamInterface;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDVideoStreamInterface *videoStreamInterface;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)captureCurrentFrame;
- (void)captureLastFrame;
- (id)description;
- (id)initWithWorkQueue:(id)arg1 videoStreamInterface:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)videoStream:(id)arg1 didGetLastDecodedFrame:(id)arg2;
- (id)videoStreamInterface;

@end
