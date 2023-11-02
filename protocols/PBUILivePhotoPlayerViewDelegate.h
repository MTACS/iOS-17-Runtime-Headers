
@protocol PBUILivePhotoPlayerViewDelegate <NSObject>

@optional

- (void)playerViewIsInteractingDidChange:(PBUILivePhotoPlayerView *)arg1;
- (void)playerViewPlaybackStateDidChange:(PBUILivePhotoPlayerView *)arg1;
- (AVPlayer *)videoPlayerForPlayerView:(PBUILivePhotoPlayerView *)arg1;

@end
