
@protocol AVHomeIPCameraActionButtonHandling <NSObject>

@required

- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(bool)arg1;

@end
