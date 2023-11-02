
@protocol HUCameraPlayerAVBehaviorDelegate <NSObject>

@required

- (double)currentScrubberResolutionForBehavior:(HUCameraPlayerAVBehavior *)arg1;

@optional

- (void)pictureInPictureDidToggleMicrophone;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(bool)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(bool)arg1;

@end
