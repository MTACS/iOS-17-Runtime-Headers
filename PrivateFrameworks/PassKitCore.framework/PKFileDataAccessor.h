
@interface PKFileDataAccessor : PKDataAccessor {
    PKDirectoryCoordinator * _coordinator;
    NSString * _explicitDataTypeIdentifier;
    NSURL * _fileURL;
    bool  _ownsFileURL;
    PKRemoteAssetManager * _remoteAssetManager;
    bool  _remoteAssetManagerAccessed;
    NSArray * _seids;
}

@property (nonatomic, copy) NSString *explicitDataTypeIdentifier;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic) bool ownsFileURL;

- (void).cxx_destruct;
- (void)_downloadRemoteAssetsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)archiveData;
- (id)bundle;
- (id)content;
- (void)contentWithCompletion:(id /* block */)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)dataForBundleResources:(id)arg1;
- (void)dealloc;
- (id)dictionary;
- (void)dictionaryWithCompletion:(id /* block */)arg1;
- (id)displayProfileOfType:(long long)arg1;
- (id)explicitDataTypeIdentifier;
- (id)fileURL;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)init;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2 coordinator:(id)arg3;
- (id)manifestHash;
- (bool)ownsFileURL;
- (id)passLocalizedStringForKey:(id)arg1;
- (id)remoteAssetManager;
- (id)remoteAssetManagerForSEIDs:(id)arg1;
- (bool)remoteAssetsDownloadedForSEIDs:(id)arg1;
- (bool)remoteAssetsDownloadedForScreenScale:(double)arg1 seids:(id)arg2 suffix:(id)arg3;
- (id)resourceValueForKey:(id)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (id)serializedFileWrapper;
- (void)setExplicitDataTypeIdentifier:(id)arg1;
- (void)setOwnsFileURL:(bool)arg1;

@end
