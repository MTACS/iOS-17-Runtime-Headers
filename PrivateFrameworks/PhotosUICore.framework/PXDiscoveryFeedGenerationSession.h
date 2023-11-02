
@interface PXDiscoveryFeedGenerationSession : NSObject {
    PXDiscoveryFeedGenerationOptions * _options;
    PLPhotoAnalysisServiceClient * _photoAnalysisServiceClient;
    PHPhotoLibrary * _photoLibrary;
    NSDictionary * _sessionState;
}

- (void).cxx_destruct;
- (id)_assetCollectionWithAsset:(id)arg1;
- (id)additionaItemsWithTargetCount:(unsigned long long)arg1;
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;

@end
