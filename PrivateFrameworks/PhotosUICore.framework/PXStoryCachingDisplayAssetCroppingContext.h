
@interface PXStoryCachingDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext> {
    <PXDisplayAsset> * _cachedAsset;
    long long  _cachedFaceCount;
    long long  _cachedFeaturedFaceCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _cachedNormalizedFaceRects;
    unsigned long long  _cachedOptions;
    <PXDisplayAsset> * _cachedPanoramaAsset;
    long long  _cachedPanoramaAxis;
    NSArray * _cachedPanoramaCropContentRects;
    double  _cachedPanoramaCropContentsRectsApectRatio;
    <PXStoryDisplayAssetCroppingContext> * _croppingContext;
}

- (void).cxx_destruct;
- (id)cropContentRectsForMultipartPanoramaAsset:(id)arg1 axis:(long long)arg2 cropContentsRectsApectRatio:(double)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithCroppingContext:(id)arg1;
- (void)requestIndividualFaceRectsInAsset:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;

@end
