
@interface PXStoryDefaultDisplayAssetCroppingContext : PXStoryBaseDisplayAssetCroppingContext {
    <PXDisplayAssetCollection> * _assetCollection;
    <PXStorySaliencyDataSource> * _detailedSaliency;
    NSSet * _featuredPersonLocalIdentifiers;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) <PXStorySaliencyDataSource> *detailedSaliency;
@property (nonatomic, readonly) NSSet *featuredPersonLocalIdentifiers;

- (void).cxx_destruct;
- (id)adjustOrderedFaces:(id)arg1 featuredFaceCount:(long long*)arg2;
- (id)adjustOrderedFaces:(id)arg1 featuredFaceCount:(long long*)arg2 forFeaturedPersonWithLocalIdentifiers:(id)arg3;
- (id)assetCollection;
- (id)cropContentRectsForMultipartPanoramaAsset:(id)arg1 axis:(long long)arg2 cropContentsRectsApectRatio:(double)arg3;
- (id)detailedSaliency;
- (id)featuredPersonLocalIdentifiers;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 detailedSaliency:(id)arg2;
- (id)orderFaces:(id)arg1;

@end
