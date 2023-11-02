
@interface CoreIDVUI.RGBCaptureSessionManager : NSObject <CIDVRGBCaptureDelegate, CIDVRGBCaptureImageQualityDelegate> {
    void captureController;
    void delegate;
    void documentsRepository;
    void encryptionQueue;
    void frameCount;
    void frameRate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastResult;
    void proofingFlowManager;
    void repeatCount;
    void resultCount;
    void selfieCount;
}

- (void).cxx_destruct;
- (void)captureSelfieDidContinueAfterGesture;
- (void)captureSelfieDidContinueAfterSelfie;
- (void)captureSelfieDidDetectIncorrectGesture:(id)arg1;
- (void)captureSelfieDidFinishGestureMonitoring:(id)arg1;
- (void)captureSelfieDidFinishWithSuccess;
- (void)captureSelfieDidGestureTimeout:(id)arg1;
- (void)captureSelfieDidObtainPicture;
- (void)captureSelfieDidRestart:(long long)arg1;
- (void)captureSelfieDidRetakeAfterSelfie;
- (void)captureSelfieDidRetryGesture:(id)arg1;
- (void)captureSelfieDidSkipGesture:(id)arg1;
- (void)captureSelfieDidTryDifferentGestureMovement:(id)arg1;
- (int)captureSelfieGetNewLuxValue;
- (void)captureSelfieObtainNewConfiguration:(id /* block */)arg1;
- (void)captureSelfieWillMonitorGesture:(id)arg1;
- (void)confirmSelfieViewDidAppear;
- (void)didCaptureLivenessVideoAtURL:(id)arg1;
- (void)didFinishAssessmentWithResults:(id)arg1 error:(id)arg2;
- (id)init;
- (void)livenessUIFlowDidCompleteWithSelfie:(id)arg1;
- (void)takeSelfieViewDidAppear;
- (void)verifyQualityForFrame:(struct __CVBuffer { }*)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
