
@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior <HFCameraClipScrubbing> {
    <HUCameraPlayerAVBehaviorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCameraPlayerAVBehaviorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginScrubbing;
- (id)delegate;
- (void)endScrubbingWithTargetTime:(double)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(bool)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(bool)arg1;
- (void)scrubToTime:(double)arg1;
- (void)setDelegate:(id)arg1;

@end
