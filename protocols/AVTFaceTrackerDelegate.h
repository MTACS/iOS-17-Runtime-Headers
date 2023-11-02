
@protocol AVTFaceTrackerDelegate <NSObject>

@required

- (bool)faceTracker:(AVTFaceTracker *)arg1 shouldForgetNoLongerTrackedUserIdentifier:(NSUUID *)arg2;
- (bool)faceTracker:(AVTFaceTracker *)arg1 shouldTrackNewUserIdentifier:(NSUUID *)arg2;
- (void)faceTrackerDidUpdate:(AVTFaceTracker *)arg1 trackingInfo:(AVTFaceTrackingInfo *)arg2 userIdentifier:(NSUUID *)arg3;
- (void)faceTrackerDidUpdate:(AVTFaceTracker *)arg1 withARFrame:(ARFrame *)arg2;

@optional

- (void)faceTracker:(AVTFaceTracker *)arg1 session:(ARSession *)arg2 didFailWithError:(NSError *)arg3;
- (void)faceTracker:(AVTFaceTracker *)arg1 session:(ARSession *)arg2 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)faceTracker:(AVTFaceTracker *)arg1 sessionInterruptionEnded:(ARSession *)arg2;
- (void)faceTracker:(AVTFaceTracker *)arg1 sessionWasInterrupted:(ARSession *)arg2;
- (void)faceTrackerDidLostTrackingWhileRecording:(AVTFaceTracker *)arg1;

@end
