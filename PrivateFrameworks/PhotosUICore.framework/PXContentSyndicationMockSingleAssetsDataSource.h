
@interface PXContentSyndicationMockSingleAssetsDataSource : PXContentSyndicationDataSource {
    PHFetchResult * _fetchResult;
}

- (void).cxx_destruct;
- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)countForCollection:(id)arg1;
- (id)dataSourceUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)indexPathForCollection:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithFetchResult:(id)arg1;
- (id)mostRecentlyAddedDate;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
