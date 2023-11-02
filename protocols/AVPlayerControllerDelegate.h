
@protocol AVPlayerControllerDelegate <NSObject>

@required

- (bool)playerControllerCanRestorePlaybackRateAfterAudioSessionDeactivation:(AVPlayerController *)arg1;
- (void)playerControllerDidCompleteInspection:(AVPlayerController *)arg1;

@end
