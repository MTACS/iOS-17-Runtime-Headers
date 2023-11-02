
@protocol PXAssetsDataSourceManagerObserver <PXSectionedDataSourceManagerObserver>

@optional

- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(PXAssetsDataSourceManager *)arg1;
- (void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(PXAssetsDataSourceManager *)arg1;

@end
