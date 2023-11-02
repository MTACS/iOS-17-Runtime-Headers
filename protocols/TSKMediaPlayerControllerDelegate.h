
@protocol TSKMediaPlayerControllerDelegate <NSObject>

@required

- (void)playbackDidStopForPlayerController:(id <TSKMediaPlayerController>)arg1;
- (void)playerController:(id <TSKMediaPlayerController>)arg1 playbackDidFailWithError:(NSError *)arg2;

@end
