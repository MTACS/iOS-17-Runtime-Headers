
@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (id)bestArtworkSizes;
+ (id)sharedDataSource;

- (id)_urlForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasExportableArtworkPropertiesForCatalog:(id)arg1;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)supportedSizesForCatalog:(id)arg1;

@end
