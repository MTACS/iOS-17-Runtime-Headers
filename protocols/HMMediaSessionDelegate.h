
@protocol HMMediaSessionDelegate <NSObject>

@optional

- (void)mediaSession:(HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSessionDidUpdate:(HMMediaSession *)arg1;

@end
