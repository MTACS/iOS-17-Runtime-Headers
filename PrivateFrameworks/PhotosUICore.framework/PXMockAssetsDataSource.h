
@interface PXMockAssetsDataSource : PXAssetsDataSource {
    NSArray * _assetCollections;
    NSArray * _assetsBySection;
}

@property (nonatomic, readonly) NSArray *assetCollections;
@property (nonatomic, readonly) NSArray *assetsBySection;

- (void).cxx_destruct;
- (id)assetCollections;
- (id)assetsBySection;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectID:(id)arg1;
- (id)initWithAssetsBySection:(id)arg1 assetCollections:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
