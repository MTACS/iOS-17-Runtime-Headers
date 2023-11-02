
@protocol PXPassiveContentDataSourceChangeObserver <NSObject>

@required

- (void)passiveContentDataSourceAvailableTypesDidChange:(PXPassiveContentDataSourceBase *)arg1;
- (void)passiveContentDataSourcePreviewAssetsDidChange:(PXPassiveContentDataSourceBase *)arg1;

@end
