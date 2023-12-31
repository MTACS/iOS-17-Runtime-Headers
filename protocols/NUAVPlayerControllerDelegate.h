
@protocol NUAVPlayerControllerDelegate <NSObject>

@required

- (void)playerController:(NUAVPlayerController *)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (void)playerControllerDidFinishPlaying:(NUAVPlayerController *)arg1 duration:(double)arg2;
- (void)playerControllerFailedToPlayToEnd:(NUAVPlayerController *)arg1 error:(NSError *)arg2;
- (void)playerControllerIsReadyForPlayback:(NUAVPlayerController *)arg1;

@end
