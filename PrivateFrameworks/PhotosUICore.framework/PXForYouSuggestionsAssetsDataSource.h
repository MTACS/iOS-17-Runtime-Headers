
@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {
    NSArray * _assets;
    <PXDisplayAssetCollection> * _collection;
}

@property (nonatomic, copy) NSArray *assets;

+ (id)new;

- (void).cxx_destruct;
- (id)assets;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForAssetReference:(id)arg1;
- (id)init;
- (id)initWithDisplayAssets:(id)arg1 collection:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setAssets:(id)arg1;

@end
