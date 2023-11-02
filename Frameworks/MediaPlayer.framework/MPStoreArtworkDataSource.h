
@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (id)sharedStoreArtworkDataSource;

- (struct CGSize { double x1; double x2; })_bestSizeForImageSizeInfo:(id)arg1 catalog:(id)arg2;
- (id)_bestURLForCatalog:(id)arg1 kind:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })_clampImageSize:(struct CGSize { double x1; double x2; })arg1 toMaxSupportedSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(id)arg2;
- (struct CGSize { double x1; double x2; })bestAvailableSizeForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 kind:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasExportableArtworkPropertiesForCatalog:(id)arg1;
- (id)requestForCatalog:(id)arg1 kind:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (bool)wantsBackgroundImageDecompression;

@end
