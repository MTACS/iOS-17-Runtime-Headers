
@protocol TUVideoDeviceControllerProvider <NSObject>

@required

- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (<TUVideoDeviceControllerProviderDelegate> *)delegate;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (bool)hasAvailableDeskViewCameras;
- (NSArray *)inputDevices;
- (bool)isCameraBlurEnabled;
- (bool)isCinematicFramingEnabled;
- (bool)isPreviewRunning;
- (bool)isReactionEffectGestureEnabled;
- (bool)isStudioLightEnabled;
- (NSString *)localCameraUID;
- (VideoAttributes *)localScreenAttributesForVideoAttributes:(VideoAttributes *)arg1;
- (VideoAttributes *)localVideoAttributes;
- (CALayer *)localVideoLayer:(bool)arg1;
- (void)pausePreview;
- (void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)setCameraBlurEnabled:(bool)arg1;
- (void)setCameraZoomFactor:(double)arg1;
- (void)setCinematicFramingEnabled:(bool)arg1;
- (void)setDelegate:(id <TUVideoDeviceControllerProviderDelegate>)arg1;
- (void)setLocalCameraWithUID:(NSString *)arg1;
- (void)setLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)setLocalVideoAttributes:(VideoAttributes *)arg1;
- (void)setLocalVideoLayer:(CALayer *)arg1 front:(bool)arg2;
- (void)setReactionEffectGestureEnabled:(bool)arg1;
- (void)setStudioLightEnabled:(bool)arg1;
- (void)startPreview;
- (void)stopPreview;
- (bool)supportsCameraBlurForDevice:(AVCaptureDevice *)arg1;

@end
