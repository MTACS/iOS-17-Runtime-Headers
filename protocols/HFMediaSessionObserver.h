
@protocol HFMediaSessionObserver <HMMediaSessionDelegate>

@optional

- (void)mediaSession:(HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(HMMediaSession *)arg1 failedToUpdatePlaybackStateWithError:(NSError *)arg2;
- (void)mediaSession:(HMMediaSession *)arg1 willUpdatePlaybackState:(long long)arg2;
- (void)mediaSessionDidUpdate:(HMMediaSession *)arg1;

@end
