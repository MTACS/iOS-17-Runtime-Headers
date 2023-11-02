
@protocol AVPlayerControllerWebKitDelegate <NSObject>

@optional

- (void)webkitPlayerController:(AVPlayerController *)arg1 didChangeScrubbingStateTo:(bool)arg2;
- (void)webkitPlayerController:(AVPlayerController *)arg1 didUpdateSeekToTime:(double)arg2;

@end
