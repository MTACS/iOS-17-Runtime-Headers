
@interface PLPhotoKitVariationCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSURL * _cacheURL;
    NSCache * _memoryCache;
}

@property (readonly) NSURL *cacheURL;

- (void).cxx_destruct;
- (id)_fileURLWithIdentifier:(id)arg1 sourceType:(long long)arg2 pathExtension:(id)arg3;
- (bool)_performChangesForAssetIdentifier:(id)arg1 sourceType:(long long)arg2 changesBlock:(id /* block */)arg3;
- (id)_readInfoForURL:(id)arg1;
- (bool)_removeCachesForURL:(id)arg1;
- (void)_saveToMemoryCache:(id)arg1 forFileURL:(id)arg2 fileSize:(unsigned long long)arg3;
- (bool)_writeInfo:(id)arg1 atURL:(id)arg2;
- (id)analysisResultForAssetIdentifier:(id)arg1;
- (id)analysisResultForAssetIdentifier:(id)arg1 sourceType:(long long)arg2;
- (id)cacheURL;
- (bool)deleteCacheForAssetIdentifier:(id)arg1;
- (bool)deleteCacheForAssetIdentifier:(id)arg1 sourceType:(long long)arg2;
- (unsigned long long)evictIfNeeded;
- (id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2;
- (id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2 sourceType:(long long)arg3;
- (id)initWithCacheURL:(id)arg1;
- (id)initWithPathManager:(id)arg1;
- (id)portraitEffectSettingsForAssetIdentifier:(id)arg1;
- (id)portraitEffectSettingsForAssetIdentifier:(id)arg1 sourceType:(long long)arg2;
- (unsigned long long)purgeAll;
- (void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2;
- (void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2 sourceType:(long long)arg3;
- (void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3;
- (void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3 sourceType:(long long)arg4;
- (void)savePortraitEffectSettings:(id)arg1 assetIdentifier:(id)arg2;
- (void)savePortraitEffectSettings:(id)arg1 sourceType:(long long)arg2 assetIdentifier:(id)arg3;

@end
