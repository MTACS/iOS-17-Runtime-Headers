
@protocol SOMediaNowPlayingListening <NSObject>

@required

- (void)nowPlayingObserver:(SOMediaNowPlayingObserver *)arg1 playbackStateDidChangeFrom:(long long)arg2 to:(long long)arg3 lastPlayingDate:(NSDate *)arg4;

@optional

- (bool)nowPlayingObserver:(SOMediaNowPlayingObserver *)arg1 isGroupIdentifierFromMediaRemoteActiveDeviceInfoIdenticalToContext:(NSString *)arg2;
- (void)nowPlayingObserver:(SOMediaNowPlayingObserver *)arg1 proxyGroupPlayerStateDidChangeFrom:(bool)arg2 to:(bool)arg3;
- (void)nowPlayingObserverNowPlayingInfoDidChange:(SOMediaNowPlayingObserver *)arg1;

@end
