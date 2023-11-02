
@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling> {
    NSMapTable * _mapping;
    AVPlayerPlaybackCoordinator * _playbackCoordinator;
    MPCPlaybackEngine * _playbackEngine;
}

@property (nonatomic, readonly, copy) NSMapTable *mapping;
@property (nonatomic, readonly) AVPlayerPlaybackCoordinator *playbackCoordinator;
@property (nonatomic) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly, copy) NSString *targetContentItemID;

- (void).cxx_destruct;
- (id)MPAVItemForMFPlayerItem:(id)arg1;
- (id)_MPAVItemForContentItemID:(id)arg1 allowReuse:(bool)arg2;
- (bool)canSkipInDirection:(long long)arg1 fromItem:(id)arg2;
- (id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long*)arg3;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)invalidateCache;
- (void)invalidateCacheWithContentItemID:(id)arg1;
- (id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;
- (id)mapping;
- (id)playbackCoordinator;
- (id)playbackEngine;
- (id)queueItemForContentItemID:(id)arg1 allowReuse:(bool)arg2 error:(id*)arg3;
- (id)queueItemForPlayerItem:(id)arg1 allowReuse:(bool)arg2;
- (void)setMPAVItem:(id)arg1 forMFPlayerItem:(id)arg2;
- (void)setPlaybackEngine:(id)arg1;
- (id)targetContentItemID;
- (void)updatePlayerPlaybackCoordinator:(id)arg1;

@end
