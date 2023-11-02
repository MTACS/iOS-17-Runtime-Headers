
@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding> {
    DDSAssetQueryResultCache * _assetQueryResultsCache;
    NSMutableDictionary * _compatabilityVersionByAssetType;
    <DDSMobileAssetv2ProviderDataSource> * _dataSource;
    NSMutableDictionary * _downloadStateByAssetID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <DDSAssetProvidingDelegate> * delegate;
}

@property (nonatomic, readonly) DDSAssetQueryResultCache *assetQueryResultsCache;
@property (nonatomic, readonly) NSMutableDictionary *compatabilityVersionByAssetType;
@property (nonatomic, readonly) <DDSMobileAssetv2ProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <DDSAssetProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *downloadStateByAssetID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)latestAssetsOnlyFromAssets:(id)arg1;
+ (id)latestBetweenAssetA:(id)arg1 AssetB:(id)arg2;
+ (id)platformVersion;

- (void).cxx_destruct;
- (id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2;
- (id)assetQueryResultsCache;
- (id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2;
- (id)assetsInCalalogForQuery:(id)arg1 errorPtr:(id*)arg2;
- (void)beginDownloadForAssertion:(id)arg1 discretionaryDownload:(bool)arg2 handler:(id /* block */)arg3;
- (void)beginDownloadForAssertions:(id)arg1 discretionaryDownload:(bool)arg2;
- (void)beginDownloadForAssets:(id)arg1 withPolicy:(id)arg2 discretionaryDownload:(bool)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (id)compatabilityVersionByAssetType;
- (long long)compatabilityVersionForAssetType:(id)arg1;
- (id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
- (void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;
- (void)didUpdateCatalogWithAssetType:(id)arg1 error:(id)arg2;
- (id)downloadOptionsForCatalogWithType:(id)arg1 discretionaryDownload:(bool)arg2;
- (id)downloadOptionsForPolicy:(id)arg1 discretionaryDownload:(bool)arg2;
- (id)downloadStateByAssetID;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsForAssertions:(id)arg1;
- (void)removeOldAssetsForAssertions:(id)arg1;
- (void)serverDidUpdateAssetsWithType:(id)arg1;
- (void)setCompatabilityVersion:(long long)arg1 forAssetType:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchAttributeValue:(id)arg1 givenValue:(id)arg2;
- (void)startCatalogDownloadForAssetType:(id)arg1 withDownloadOptions:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)startDownloadForAsset:(id)arg1 withOptions:(id)arg2 progress:(id /* block */)arg3 handler:(id /* block */)arg4;
- (id)updatableAssetsForAssertion:(id)arg1;
- (void)updateCatalogForAssetType:(id)arg1 discretionaryDownload:(bool)arg2 withCompletion:(id /* block */)arg3;

@end
