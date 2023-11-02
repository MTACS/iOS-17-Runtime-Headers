
@interface PXDiscoveryFeedDataSource : PXSectionedDataSource {
    PHFetchResult * _assetCollections;
}

@property (nonatomic, readonly) PHFetchResult *assetCollections;

- (void).cxx_destruct;
- (id)assetCollections;
- (id)init;
- (id)initWithAssetCollections:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
