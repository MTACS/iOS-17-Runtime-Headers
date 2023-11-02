
@protocol MFQueueControlling

@required

- (bool)canSkipInDirection:(long long)arg1 fromItem:(id <MFQueuePlayerItem>)arg2;
- (NSArray *)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long*)arg3;
- (void)invalidateCache;
- (void)invalidateCacheWithContentItemID:(NSString *)arg1;
- (<MFQueuePlayerItem> *)itemToFollowItem:(id <MFQueuePlayerItem>)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;
- (<MFQueuePlayerItem> *)queueItemForContentItemID:(NSString *)arg1 allowReuse:(bool)arg2 error:(id*)arg3;
- (<MFQueuePlayerItem> *)queueItemForPlayerItem:(id <MFPlayerItem>)arg1 allowReuse:(bool)arg2;
- (NSString *)targetContentItemID;
- (void)updatePlayerPlaybackCoordinator:(AVPlayerPlaybackCoordinator *)arg1;

@end
