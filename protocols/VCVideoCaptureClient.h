
@protocol VCVideoCaptureClient

@required

- (void)avConferencePreviewError:(NSString *)arg1;
- (void)cameraAvailabilityDidChange:(bool)arg1;
- (VCVideoRule *)clientCaptureRule;
- (void)thermalLevelDidChange:(int)arg1;

@optional

- (void)avConferenceScreenCaptureError:(NSString *)arg1;
- (void)captureSource1080pAvailabilityDidChange:(bool)arg1;
- (void)captureSourceCenterStageEnabledDidChange:(bool)arg1;
- (void)captureSourcePortraitBlurEnabledDidChange:(bool)arg1;
- (void)captureSourcePositionDidChange:(bool)arg1;
- (void)didStopReacting;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(bool)arg2 powerLevelDidChange:(bool)arg3;
- (void)reactionDidStart:(NSString *)arg1;

@end
