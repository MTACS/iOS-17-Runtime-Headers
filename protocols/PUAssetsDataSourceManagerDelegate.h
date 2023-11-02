
@protocol PUAssetsDataSourceManagerDelegate <NSObject>

@required

- (void)assetsDataSourceManager:(PUAssetsDataSourceManager *)arg1 didChangeAssetsDataSource:(PUAssetsDataSource *)arg2;
- (NSArray *)assetsDataSourceManagerInterestingAssetReferences:(PUAssetsDataSourceManager *)arg1;

@end
