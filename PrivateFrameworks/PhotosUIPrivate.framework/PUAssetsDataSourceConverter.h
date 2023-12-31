
@interface PUAssetsDataSourceConverter : PUTilingDataSourceConverter

+ (id)defaultConverter;

- (bool)convertIndexPath:(id*)arg1 tileKind:(id*)arg2 fromDataSource:(id)arg3 toDataSource:(id)arg4;
- (bool)shouldReloadTileControllerFromAsset:(id)arg1 toAsset:(id)arg2 tileKind:(id)arg3;

@end
