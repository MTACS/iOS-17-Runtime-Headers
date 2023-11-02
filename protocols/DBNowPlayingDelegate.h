
@protocol DBNowPlayingDelegate <NSObject>

@optional

- (void)nowPlayingObserver:(DBNowPlayingObserver *)arg1 didChangeNowPlayingApplication:(DBApplicationInfo *)arg2;
- (void)nowPlayingObserver:(DBNowPlayingObserver *)arg1 didUpdatePlaybackState:(bool)arg2 inApplication:(DBApplicationInfo *)arg3;

@end
