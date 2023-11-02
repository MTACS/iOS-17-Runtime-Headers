
@protocol GCConfigurationAssetManagementServiceXPCInterface

@required

- (void)assetsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSProgress *)checkForNewAssets:(void *)arg1 forceCatalogRefresh:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)currentAsset:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCConfigurationAsset> *, NSError *, void*
- (void)lastUpdateDateWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*

@end
