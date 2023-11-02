
@interface PXStaticDisplayAssetsDataSource : PXAssetsDataSource {
    NSArray * _assetCollectionBySection;
    NSArray * _assetsBySection;
    NSArray * _curatedAssetsBySection;
    NSArray * _exposedAssetsBySection;
    NSArray * _keyAssetsBySection;
    long long  _sectionContent;
}

@property (nonatomic, readonly) NSArray *assetCollectionBySection;
@property (nonatomic, readonly) NSArray *assetsBySection;
@property (nonatomic, readonly) NSArray *curatedAssetsBySection;
@property (nonatomic, readonly) NSArray *exposedAssetsBySection;
@property (nonatomic, readonly) NSArray *keyAssetsBySection;
@property (nonatomic, readonly) long long sectionContent;

- (void).cxx_destruct;
- (id)assetCollectionBySection;
- (id)assetsBySection;
- (id)curatedAssetsBySection;
- (id)exposedAssetsBySection;
- (bool)hasCurationForAssetCollection:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)init;
- (id)initWithAssetCollectionBySection:(id)arg1 assetsBySection:(id)arg2 curatedAssetsBySection:(id)arg3 keyAsssetsBySection:(id)arg4 sectionContent:(long long)arg5;
- (id)initWithDisplayAssetFetchResults:(id)arg1;
- (id)keyAssetsBySection;
- (id)keyAssetsForAssetCollection:(id)arg1;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)numberOfCuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)sectionContent;

@end
