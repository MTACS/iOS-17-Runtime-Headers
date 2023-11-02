
@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal * _priv;
}

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)arg1;
+ (id)assetCacheWithURL:(id)arg1;

- (id)URL;
- (id)allKeys;
- (long long)currentSize;
- (void)dealloc;
- (void)enableAutomaticCacheSizeManagement;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 enableCRABSCache:(bool)arg2 enableHLSCache:(bool)arg3;
- (bool)isDefunct;
- (bool)isHTTPLiveStreamingCacheEnabled;
- (bool)isPlayableOffline;
- (bool)isProgressiveDownloadCacheEnabled;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)maxEntrySize;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (void)setMaxEntrySize:(long long)arg1;
- (void)setMaxSize:(long long)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
