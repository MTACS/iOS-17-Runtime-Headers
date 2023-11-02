
@interface PXStoryAutoEditMomentsProvider : NSObject {
    <PXDisplayAssetCollection> * _assetCollection;
    PFStoryClusteringProperties * _clusteringProperties;
    PFStoryAutoEditConfiguration * _configuration;
    <PXDisplayAssetFetchResult> * _displayAssets;
    NSError * _error;
    NSObject<OS_os_log> * _log;
    NSArray * _moments;
    PXStoryAutoEditConcreteMomentsStatistics * _statistics;
}

@property (nonatomic, retain) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, retain) PFStoryClusteringProperties *clusteringProperties;
@property (nonatomic, retain) PFStoryAutoEditConfiguration *configuration;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) <PXDisplayAssetFetchResult> *displayAssets;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *moments;
@property (nonatomic, readonly) <PXStoryAutoEditMomentsStatistics> *statistics;

- (void).cxx_destruct;
- (void)_computeClustering;
- (id)_diagnosticSwiftCodeForMomentsUnitTest;
- (id)_faceprintDatasByAssetUUIDWithAssets:(id)arg1;
- (id)_faceprintsByAssetUUIDWithAssets:(id)arg1;
- (id)_faceprintsByAssetUUIDWithAssets:(id)arg1 faceprintDatas:(id)arg2;
- (id)_locationsByAssetUUIDWithAssets:(id)arg1;
- (id)assetCollection;
- (id)clusteringProperties;
- (id)configuration;
- (unsigned long long)count;
- (id)displayAssets;
- (void)enumerateMomentsUsingBlock:(id /* block */)arg1;
- (id)error;
- (id)initWithConfiguration:(id)arg1 assetCollection:(id)arg2 displayAssets:(id)arg3;
- (id)momentForDisplayAssetIndex:(unsigned long long)arg1;
- (id)moments;
- (void)setAssetCollection:(id)arg1;
- (void)setClusteringProperties:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDisplayAssets:(id)arg1;
- (id)statistics;

@end
