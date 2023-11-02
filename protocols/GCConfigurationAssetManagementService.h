
@protocol GCConfigurationAssetManagementService <NSObject>

@required

- (GCFuture *)assets;
- (NSProgress *)checkForNewAssets:(void *)arg1 forceCatalogRefresh:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (GCFuture *)currentAsset:(bool)arg1;
- (GCFuture *)lastUpdateDate;

@end
