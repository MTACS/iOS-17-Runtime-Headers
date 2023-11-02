
@interface AVAssetCache : NSObject

@property (getter=isPlayableOffline, nonatomic, readonly) bool playableOffline;

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)arg1;
+ (id)assetCacheWithURL:(id)arg1;

- (id)URL;
- (id)_init;
- (id)allKeys;
- (long long)currentSize;
- (id)initWithURL:(id)arg1;
- (bool)isDefunct;
- (bool)isPlayableOffline;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)maxEntrySize;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
