
@interface PXStoryPPTConfiguration : NSObject {
    PHAssetCollection * _assetCollection;
    unsigned long long  _assetCount;
    unsigned long long  _assetType;
    long long  _collectionType;
    NSString * _contentDescription;
    double  _preferredStoryDuration;
    unsigned long long  _subpreset;
    bool  _useDefaultMemory;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic) unsigned long long assetCount;
@property (nonatomic, readonly) unsigned long long assetType;
@property (nonatomic, readonly) long long collectionType;
@property (nonatomic, readonly) NSString *contentDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) double preferredStoryDuration;
@property (nonatomic) unsigned long long subpreset;
@property (nonatomic, readonly) bool useDefaultMemory;

+ (void)_configureConfiguration:(id)arg1 forSubpreset:(unsigned long long)arg2;
+ (void)_fetchLatestMemoriesWithMaximumCount:(long long)arg1 resultHandler:(id /* block */)arg2;
+ (void)_requestPhotoLibraryWithResultHandler:(id /* block */)arg1;
+ (id)configurationsForPreset:(unsigned long long)arg1 subpreset:(unsigned long long)arg2 testOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_completeConfigurationRequestWithAssetCollection:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_completeConfigurationRequestWithFetchResult:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_completeConfigurationRequestWithStoryConfiguration:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_configureWithMemoryFetchResultProvider:(id /* block */)arg1 resultHandler:(id /* block */)arg2;
- (void)_createSyntheticAssetsWithResultHandler:(id /* block */)arg1;
- (void)_fetchAssetsWithResultHandler:(id /* block */)arg1;
- (void)_fetchDefaultMemoryWithResultHandler:(id /* block */)arg1;
- (void)_fetchLatestAssetCollectionOfType:(long long)arg1 resultHandler:(id /* block */)arg2;
- (void)_fetchMemoryByLocalIdentifier:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_fetchMemoryByName:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_performPhotoLibraryFetch:(id /* block */)arg1;
- (id)_stringFromAssetCount:(unsigned long long)arg1;
- (id)_stringFromAssetType:(unsigned long long)arg1;
- (id)assetCollection;
- (unsigned long long)assetCount;
- (unsigned long long)assetType;
- (long long)collectionType;
- (id)contentDescription;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 name:(id)arg2;
- (id)initWithAssetType:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)initWithDefaultMemory;
- (id)initWithLatestCollectionOfType:(long long)arg1;
- (id)initWithPreset:(unsigned long long)arg1;
- (id)name;
- (double)preferredStoryDuration;
- (void)requestStoryConfigurationWithOptions:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)setAssetCount:(unsigned long long)arg1;
- (void)setPreferredStoryDuration:(double)arg1;
- (void)setSubpreset:(unsigned long long)arg1;
- (unsigned long long)subpreset;
- (bool)useDefaultMemory;

@end
