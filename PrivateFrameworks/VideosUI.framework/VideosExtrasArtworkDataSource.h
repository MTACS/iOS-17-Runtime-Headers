
@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (bool)wantsBackgroundImageDecompression;

@end
