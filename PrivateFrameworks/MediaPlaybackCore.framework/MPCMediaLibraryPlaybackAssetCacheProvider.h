
@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding> {
    MPMediaLibrary * _mediaLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_downloadedAssetDestinationDirectoryForMediaLibrary:(id)arg1;
+ (id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;
+ (id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;
+ (id)deviceLibraryProviderWithUserIdentity:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithMediaLibrary:(id)arg1;
- (long long)_persistentIDForModelObject:(id)arg1;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)didCacheNewAssetToDestinationURL:(id)arg1;
- (void)getPlaybackAssetDestinationURL:(id*)arg1 sharedCacheURL:(id*)arg2 purgeable:(bool)arg3 purchaseBundleDestinationURL:(id*)arg4 assetQualityType:(long long)arg5 fileName:(id)arg6 pathExtension:(id)arg7;
- (bool)isUnderDailyCacheAssetDownloadLimit;
- (void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
