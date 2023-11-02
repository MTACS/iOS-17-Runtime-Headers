
@interface PXMediaAnalysisVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {
    PHAsset * _asset;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
}

+ (void)cacheRecipe:(id)arg1 forAsset:(id)arg2;
+ (id)cachedRecipeForAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2;
- (id)analyticsPayload;
- (id)initWithAsset:(id)arg1 videoDimensions:(struct CGSize { double x1; double x2; })arg2;

@end
