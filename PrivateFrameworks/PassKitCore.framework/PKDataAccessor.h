
@interface PKDataAccessor : NSObject

@property (nonatomic, readonly) NSData *archiveData;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSData *manifestHash;
@property (nonatomic, readonly) PKRemoteAssetManager *remoteAssetManager;
@property (nonatomic, readonly) bool remoteAssetsDownloaded;
@property (nonatomic, readonly) NSData *serializedFileWrapper;

- (void)_downloadRemoteAssetsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)archiveData;
- (id)bundle;
- (id)cachedImageSetForType:(long long)arg1 withDisplayProfile:(id)arg2 displayTraits:(id)arg3;
- (id)content;
- (void)contentWithCompletion:(id /* block */)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)dataForBundleResources:(id)arg1;
- (id)dictionary;
- (void)dictionaryWithCompletion:(id /* block */)arg1;
- (id)displayProfileOfType:(long long)arg1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 seids:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)downloadRemoteAssetsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(id /* block */)arg4;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 seids:(id)arg4 completion:(id /* block */)arg5;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(bool)arg3;
- (void)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)manifestHash;
- (void)noteShared;
- (id)passLocalizedStringForKey:(id)arg1;
- (id)remoteAssetManager;
- (id)remoteAssetManagerForSEIDs:(id)arg1;
- (bool)remoteAssetsDownloaded;
- (bool)remoteAssetsDownloadedForSEIDs:(id)arg1;
- (bool)remoteAssetsDownloadedForScreenScale:(double)arg1 suffix:(id)arg2;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (id)resourceValueForKey:(id)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (id)serializedFileWrapper;
- (void)updateSettings:(unsigned long long)arg1;

@end
