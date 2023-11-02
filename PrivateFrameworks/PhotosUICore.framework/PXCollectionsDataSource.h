
@interface PXCollectionsDataSource : PXSectionedDataSource {
    id  _content;
}

@property (nonatomic, readonly) id content;

- (void).cxx_destruct;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)content;
- (long long)countForCollection:(id)arg1;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)indexPathForCollection:(id)arg1;

@end
