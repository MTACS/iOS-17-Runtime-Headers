
@protocol ARSessionObserver <NSObject>

@optional

- (void)session:(ARSession *)arg1 cameraDidChangeTrackingState:(ARCamera *)arg2;
- (void)session:(ARSession *)arg1 didChangeGeoTrackingStatus:(ARGeoTrackingStatus *)arg2;
- (void)session:(ARSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(ARSession *)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)session:(ARSession *)arg1 didOutputCollaborationData:(ARCollaborationData *)arg2;
- (void)sessionInterruptionEnded:(ARSession *)arg1;
- (bool)sessionShouldAttemptRelocalization:(ARSession *)arg1;
- (void)sessionWasInterrupted:(ARSession *)arg1;

@end
