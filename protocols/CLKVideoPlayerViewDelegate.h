
@protocol CLKVideoPlayerViewDelegate <NSObject>

@required

- (void)videoPlayerViewDidBeginPlaying:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(CLKVideoPlayerView *)arg1;

@optional

- (void)videoPlayerView:(CLKVideoPlayerView *)arg1 didFinishPrerolling:(bool)arg2;
- (void)videoPlayerViewWillBeginPlaying:(CLKVideoPlayerView *)arg1;

@end
