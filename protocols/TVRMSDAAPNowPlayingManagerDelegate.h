
@protocol TVRMSDAAPNowPlayingManagerDelegate <NSObject>

@required

- (void)nowPlayingManager:(TVRMSDAAPNowPlayingManager *)arg1 artworkDataDidBecomeAvailable:(NSData *)arg2 identifier:(NSString *)arg3;
- (void)nowPlayingManager:(TVRMSDAAPNowPlayingManager *)arg1 didUpdateAudioRoutes:(NSArray *)arg2;
- (void)nowPlayingManager:(TVRMSDAAPNowPlayingManager *)arg1 didUpdateNowPlayingInfo:(TVRMSNowPlayingInfo *)arg2;
- (void)nowPlayingManager:(TVRMSDAAPNowPlayingManager *)arg1 didUpdateVolume:(float)arg2;

@end
