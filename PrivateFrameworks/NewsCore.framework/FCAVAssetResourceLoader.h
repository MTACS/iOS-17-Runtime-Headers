
@interface FCAVAssetResourceLoader : NSObject <AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType> {
    FCAssetManager * _assetManager;
    FCThreadSafeMutableSet * _whitelistedMasterPlaylistURLs;
}

@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCThreadSafeMutableSet *whitelistedMasterPlaylistURLs;

- (void).cxx_destruct;
- (bool)_isHLSURL:(id)arg1;
- (id)assetManager;
- (id)init;
- (id)initWithCacheDirectory:(id)arg1;
- (void)prefetchMasterPlaylistForAssetURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerAVURLAssetForAutomaticResourceManagement:(id)arg1;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)whitelistedMasterPlaylistURLs;

@end
