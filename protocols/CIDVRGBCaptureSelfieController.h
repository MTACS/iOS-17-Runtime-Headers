
@protocol CIDVRGBCaptureSelfieController

@required

- (long long)analyticsState;
- (void)beginIgnoreStitchCounter;
- (void)beginNewGesture;
- (void)bootstrap;
- (void)cancelWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cancelWithError:(void *)arg1 andCompletion:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)captureSelfieUsingFlashMode:(long long)arg1;
- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, CIDVRGBCaptureUIResult *, NSError *, void*, id, SEL
- (<CIDVRGBCaptureSelfieControllerDelegate> *)delegate;
- (void)disableFrameOptions;
- (void)enableAccessibilityOptions;
- (void)enableFrameOptions;
- (void)fetchNewLivenessConfigWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CIDVRGBCaptureConfig *, NSError *, void*
- (void)finishRecording;
- (struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; })frameOptions;
- (void)gestureCompleted;
- (bool)isLowDiskSpaceError:(NSError *)arg1;
- (void)pauseLivenessGesture;
- (void)prepareToResumeLivenessGesture;
- (CIDVRGBCameraPreview *)preview;
- (void)restartLiveness;
- (void)restartSelfieCapture;
- (void)resumeLivenessGesture;
- (void)setAnalyticsState:(long long)arg1;
- (void)setCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CIDVRGBCaptureUIResult *, NSError *, void*
- (void)setDelegate:(id <CIDVRGBCaptureSelfieControllerDelegate>)arg1;
- (void)setFrameOptions:(struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; })arg1;
- (void)setPreview:(CIDVRGBCameraPreview *)arg1;
- (void)setState:(long long)arg1;
- (void)skipLivenessGesture;
- (void)startLiveness;
- (long long)state;
- (void)submitSelfie;

@end
