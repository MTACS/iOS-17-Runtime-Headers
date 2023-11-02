
@protocol _HMMediaSessionDelegate <NSObject>

@required

- (void)mediaSession:(_HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdateRouteUID:(NSString *)arg2;
- (void)mediaSessionDidUpdate:(_HMMediaSession *)arg1;

@end
