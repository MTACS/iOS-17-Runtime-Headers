
@protocol RMSDAAPNowPlayingManagerDelegate <NSObject>

@required

- (void)nowPlayingManager:(RMSDAAPNowPlayingManager *)arg1 artworkDataDidBecomeAvailable:(NSData *)arg2 identifier:(NSString *)arg3;
- (void)nowPlayingManager:(RMSDAAPNowPlayingManager *)arg1 didUpdateAudioRoutes:(NSArray *)arg2;
- (void)nowPlayingManager:(RMSDAAPNowPlayingManager *)arg1 didUpdateNowPlayingInfo:(RMSNowPlayingInfo *)arg2;
- (void)nowPlayingManager:(RMSDAAPNowPlayingManager *)arg1 didUpdateVolume:(float)arg2;

@end
