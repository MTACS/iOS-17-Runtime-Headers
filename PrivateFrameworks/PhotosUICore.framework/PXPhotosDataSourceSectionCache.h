
@interface PXPhotosDataSourceSectionCache : NSObject {
    NSDictionary * _assetCollectionToSection;
    NSArray * _assetCollections;
    PHFetchResult * _collectionListFetchResult;
    long long  _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
    long long  _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
    long long  _estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
    long long  _estimatedAssetCountWithEnrichmentStateComplete;
    long long  _estimatedAssetCountWithEnrichmentStateNotEnriched;
    long long  _estimatedOtherCount;
    long long  _estimatedPhotosCount;
    long long  _estimatedVideosCount;
    long long  _numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
    long long  _numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
    long long  _numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
    long long  _numberOfEnrichmentStateCompleteAssetCollections;
    long long  _numberOfEnrichmentStateNotEnrichedAssetCollections;
}

@property (nonatomic, readonly) NSDictionary *assetCollectionToSection;
@property (nonatomic, readonly) NSArray *assetCollections;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateComplete;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateNotEnriched;
@property (nonatomic, readonly) long long estimatedOtherCount;
@property (nonatomic, readonly) long long estimatedPhotosCount;
@property (nonatomic, readonly) long long estimatedVideosCount;
@property (nonatomic, readonly) long long numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateCompleteAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateNotEnrichedAssetCollections;

- (void).cxx_destruct;
- (id)assetCollectionToSection;
- (id)assetCollections;
- (id)collectionListFetchResult;
- (long long)estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
- (long long)estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
- (long long)estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
- (long long)estimatedAssetCountWithEnrichmentStateComplete;
- (long long)estimatedAssetCountWithEnrichmentStateNotEnriched;
- (long long)estimatedOtherCount;
- (long long)estimatedPhotosCount;
- (long long)estimatedVideosCount;
- (id)initWithCollectionListFetchResult:(id)arg1;
- (long long)numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
- (long long)numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
- (long long)numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
- (long long)numberOfEnrichmentStateCompleteAssetCollections;
- (long long)numberOfEnrichmentStateNotEnrichedAssetCollections;

@end
