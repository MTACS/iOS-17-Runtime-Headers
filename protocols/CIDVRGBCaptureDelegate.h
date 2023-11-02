
@protocol CIDVRGBCaptureDelegate <NSObject>

@optional

- (void)captureSelfieDidContinueAfterGesture;
- (void)captureSelfieDidContinueAfterSelfie;
- (void)captureSelfieDidDetectIncorrectGesture:(NSString *)arg1;
- (void)captureSelfieDidFinishGestureMonitoring:(NSString *)arg1;
- (void)captureSelfieDidFinishWithSuccess;
- (void)captureSelfieDidGestureTimeout:(NSString *)arg1;
- (void)captureSelfieDidObtainPicture;
- (void)captureSelfieDidRestart:(long long)arg1;
- (void)captureSelfieDidRetakeAfterSelfie;
- (void)captureSelfieDidRetryGesture:(NSString *)arg1;
- (void)captureSelfieDidSkipGesture:(NSString *)arg1;
- (void)captureSelfieDidTryDifferentGestureMovement:(NSString *)arg1;
- (int)captureSelfieGetNewLuxValue;
- (void)captureSelfieObtainNewConfiguration:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CIDVRGBCaptureConfig *, NSError *, void*
- (void)captureSelfieWillMonitorGesture:(NSString *)arg1;
- (void)confirmSelfieViewDidAppear;
- (void)didCaptureLivenessVideoAtURL:(NSURL *)arg1;
- (void)didFinishAssessmentWithResults:(CIDVRGBCaptureResult *)arg1 error:(NSError *)arg2;
- (void)livenessUIFlowDidCompleteWithSelfie:(NSData *)arg1;
- (void)takeSelfieViewDidAppear;

@end
