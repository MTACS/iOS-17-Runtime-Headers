
@interface TVRMSNowPlayingArtworkCache : NSObject {
    NSCache * _cache;
    _RMSNowPlayingArtworkCacheItem * _lastItem;
}

+ (id)sharedArtworkCache;

- (void).cxx_destruct;
- (id)artworkDataForIdentifier:(id)arg1;
- (id)artworkDataForNowPlayingInfo:(id)arg1;
- (id)init;
- (void)setArtworkData:(id)arg1 forIdentifier:(id)arg2;
- (void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2;

@end
