
@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal * _internal;
}

- (id)URL;
- (id)_asset;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (bool)isDefunct;
- (bool)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;

@end
