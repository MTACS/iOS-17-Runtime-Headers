
@protocol NANowPlayingPlaybackControlsDelegate

@required

- (void)nowPlayingPlaybackControlsDidTapNextTrack:(NANowPlayingPlaybackControls *)arg1;
- (void)nowPlayingPlaybackControlsDidTapPause:(NANowPlayingPlaybackControls *)arg1;
- (void)nowPlayingPlaybackControlsDidTapPlay:(NANowPlayingPlaybackControls *)arg1;
- (void)nowPlayingPlaybackControlsDidTapRewind:(NANowPlayingPlaybackControls *)arg1;
- (void)nowPlayingPlaybackControlsDidTapSkipForward:(NANowPlayingPlaybackControls *)arg1;

@end
