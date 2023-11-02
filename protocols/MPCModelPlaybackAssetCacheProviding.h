
@protocol MPCModelPlaybackAssetCacheProviding <NSObject>

@required

- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: MPModelGenericObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didCacheNewAssetToDestinationURL:(NSURL *)arg1;
- (void)getPlaybackAssetDestinationURL:(id*)arg1 sharedCacheURL:(id*)arg2 purgeable:(bool)arg3 purchaseBundleDestinationURL:(id*)arg4 assetQualityType:(long long)arg5 fileName:(NSString *)arg6 pathExtension:(NSString *)arg7;
- (bool)isUnderDailyCacheAssetDownloadLimit;
- (void)setPlaybackAssetCacheFileAsset:(void *)arg1 forGenericObject:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: MPModelFileAsset *, MPModelGenericObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
