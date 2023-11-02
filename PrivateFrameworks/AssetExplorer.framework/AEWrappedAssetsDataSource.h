
@interface AEWrappedAssetsDataSource : PXAssetsDataSource {
    PUAssetsDataSource * __reviewAssetsDataSource;
}

@property (nonatomic, readonly) PUAssetsDataSource *_reviewAssetsDataSource;

- (void).cxx_destruct;
- (id)_reviewAssetsDataSource;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithReviewAssetsDataSource:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
