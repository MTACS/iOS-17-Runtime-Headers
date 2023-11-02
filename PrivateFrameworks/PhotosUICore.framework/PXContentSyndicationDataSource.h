
@interface PXContentSyndicationDataSource : PXCollectionsDataSource

@property (nonatomic, readonly, copy) NSDate *mostRecentlyAddedDate;

- (id)allAssetsFetchResult;
- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)countForCollection:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)mostRecentlyAddedDate;

@end
