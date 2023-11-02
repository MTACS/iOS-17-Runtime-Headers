
@interface WFPHAssetCollectionPredicate : NSComparisonPredicate {
    PHAssetCollection * _assetCollection;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)initForAssetsInCollection:(id)arg1;
- (id)wf_photoLibraryFilteringPredicate;

@end
