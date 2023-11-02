
@interface PXFileBackedAssetsDataSource : PXAssetsDataSource {
    NSDictionary * _assetCollectionBySection;
    NSDictionary * _assetDescriptionsBySection;
}

@property (nonatomic, readonly, copy) NSDictionary *assetDescriptionsBySection;

- (void).cxx_destruct;
- (id)assetDescriptionsBySection;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)init;
- (id)initWithFileBackedAssetDescriptionsBySection:(id)arg1;
- (id)initWithFileURLsBySection:(id)arg1;
- (id)inputForItem:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)photosGraphSuggestedContributions;

@end
