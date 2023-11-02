
@interface PISegmentation : NSObject

+ (void)_createReadOnlyCopyOfPosterAtURL:(id)arg1 exportToURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (unsigned long long)_layerStackOptionsFromOptions:(id)arg1;
+ (id)_styleFromOptions:(id)arg1 item:(id)arg2;
+ (void)_upgradeFullPosterAtURL:(id)arg1 exportToURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)_upgradeWallpaperAtURL:(id)arg1 exportToURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)cancelSegmentationForAsset:(id)arg1;
+ (void)computeSegmentationScoresForAsset:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (struct CGImage { }*)createFullExtentPreviewImageForWallpaperAtURL:(id)arg1 error:(id*)arg2;
+ (bool)curatedSegmentationGatingDecisionForSegmentationScores:(id)arg1;
+ (bool)currentDeviceSupportsSettlingEffect;
+ (unsigned long long)currentVersion;
+ (void)ensureResources;
+ (void)exportWallpaperForAsset:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)freeResources;
+ (bool)layoutGatingDecisionForSegmentationScores:(id)arg1;
+ (void)loadSegmentationItemForAsset:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (bool)manualSegmentationGatingDecisionForSegmentationScores:(id)arg1;
+ (id)segmentationLoaderForAsset:(id)arg1;
+ (void)setSegmentationLoader:(id)arg1 forAsset:(id)arg2;
+ (unsigned long long)settlingEffectGatingFailuresFromScores:(id)arg1;
+ (struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; })settlingEffectGatingStatisticsFromScores:(id)arg1;
+ (bool)settlingEffectLayoutContainsHeadroomForSegmentationScores:(id)arg1;
+ (bool)settlingEffectLayoutDecisionForSegmentationScores:(id)arg1;
+ (bool)settlingEffectStabilizationDecisionForSegmentationScores:(id)arg1;
+ (bool)settlingEffectVideoDecisionForSegmentationScores:(id)arg1;
+ (bool)tryLoadSegmentationForColdAsset:(id)arg1;
+ (void)upgradePosterConfiguration:(id)arg1 atURL:(id)arg2 exportTo:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
+ (void)upgradeWallpaperAtURL:(id)arg1 exportToURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)warmUpResources;

@end
