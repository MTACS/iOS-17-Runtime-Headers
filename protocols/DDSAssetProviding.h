
@protocol DDSAssetProviding <NSObject>

@required

- (NSArray *)allContentItemsMatchingQuery:(DDSAssetQuery *)arg1 error:(id*)arg2;
- (NSArray *)assetsForQuery:(DDSAssetQuery *)arg1 errorPtr:(id*)arg2;
- (void)beginDownloadForAssertion:(void *)arg1 discretionaryDownload:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: DDSAssertion *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DDSAssertion *, NSError *, void*
- (void)beginDownloadForAssertions:(NSSet *)arg1 discretionaryDownload:(bool)arg2;
- (NSArray *)contentItemsFromAssets:(NSArray *)arg1 matchingFilter:(DDSAttributeFilter *)arg2;
- (<DDSAssetProvidingDelegate> *)delegate;
- (void)removeAssetsForAssertions:(NSSet *)arg1;
- (void)removeOldAssetsForAssertions:(NSSet *)arg1;
- (void)serverDidUpdateAssetsWithType:(NSString *)arg1;
- (void)setCompatabilityVersion:(long long)arg1 forAssetType:(NSString *)arg2;
- (void)setDelegate:(id <DDSAssetProvidingDelegate>)arg1;
- (void)startCatalogDownloadForAssetType:(void *)arg1 withDownloadOptions:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, MADownloadOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)startDownloadForAsset:(void *)arg1 withOptions:(void *)arg2 progress:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 14: DDSAsset *, MADownloadOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAProgressNotification *, void*, id /* block */, void*, void, id /* block */, long long, void*
- (NSSet *)updatableAssetsForAssertion:(DDSAssertion *)arg1;
- (void)updateCatalogForAssetType:(void *)arg1 discretionaryDownload:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
