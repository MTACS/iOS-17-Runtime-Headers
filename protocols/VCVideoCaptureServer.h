
@protocol VCVideoCaptureServer <VCVideoSink>

@required

- (int)getCaptureFrameRateForSource:(int)arg1;
- (void)handleCaptureEvent:(NSString *)arg1;
- (void)handleCaptureEvent:(NSString *)arg1 subType:(NSString *)arg2;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 orientation:(int)arg3;
- (void)setCFAvailabilityChange:(bool)arg1;
- (void)setCameraZoomAvailable:(bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)setCaptureFrameRate:(int)arg1;

@optional

- (int)bestCameraCaptureFrameRate;
- (void)centerStageEnabledDidChange:(bool)arg1;
- (void)didStopReacting;
- (bool)followSystemCamera;
- (void)handleCaptureSourcePositionDidChange:(bool)arg1;
- (bool)is1080pCameraAvailable;
- (struct opaqueCMFormatDescription { }*)newFormatDescriptionForCaptureSource:(int)arg1;
- (void)portraitBlurEnabledDidChange:(bool)arg1;
- (void)reactionDidStart:(NSString *)arg1;
- (void)registerVideoSink:(id <VCVideoSink>)arg1 withCaptureSource:(int)arg2;
- (void)setFollowSystemCamera:(bool)arg1;
- (void)unregisterVideoSink:(id <VCVideoSink>)arg1 withCaptureSource:(int)arg2;

@end
