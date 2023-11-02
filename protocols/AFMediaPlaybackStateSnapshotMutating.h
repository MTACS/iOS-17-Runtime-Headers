
@protocol AFMediaPlaybackStateSnapshotMutating <NSObject>

@required

- (void)setGroupIdentifier:(NSString *)arg1;
- (void)setIsProxyGroupPlayer:(bool)arg1;
- (void)setMediaType:(NSString *)arg1;
- (void)setNowPlayingTimestamp:(NSDate *)arg1;
- (void)setPlaybackState:(long long)arg1;

@end
