
@protocol PISegmentationItem <NSObject>

@required

- (PFParallaxLayerStyle *)adjustedStyleForHeadroom:(PFParallaxLayerStyle *)arg1;
- (PFParallaxLayerStyle *)availableStyleOfKind:(NSString *)arg1;
- (NSArray *)availableStyles;
- (unsigned long long)classification;
- (PIParallaxColorAnalysis *)colorAnalysis;
- (NUComposition *)composition;
- (PFParallaxLayerStyle *)defaultStyleOfKind:(NSString *)arg1;
- (NSArray *)defaultStyles;
- (NSURL *)fileURL;
- (bool)isSettlingEffectAvailable;
- (PFWallpaperCompoundDeviceConfiguration *)layoutConfiguration;
- (NSDictionary *)localLightData;
- (PFPosterLayout *)originalLayout;
- (PFParallaxLayerStyle *)originalStyle;
- (<PFParallaxAssetRegions> *)regions;
- (NSDictionary *)scores;
- (<NUImageBuffer> *)segmentationBackground;
- (<NUImageBuffer> *)segmentationConfidenceMap;
- (NSURL *)segmentationDataURL;
- (<NUImageBuffer> *)segmentationMatte;
- (bool)settlingEffectFailedAnyGating;
- (NSArray *)settlingEffectGatingDiagnostics;
- (bool)settlingEffectHasInterestingMotion;
- (PFPosterLayout *)settlingEffectLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })settlingEffectNormalizedBounds;
- (unsigned long long)settlingEffectStatus;
- (NSData *)settlingEffectVideoData;
- (PFParallaxLayerStyle *)suggestedStyleForCategory:(NSString *)arg1;
- (bool)supportsBackgroundlessStyles;
- (bool)supportsManualClockIntersectionTolerance;
- (bool)supportsSegmentedStyles;
- (unsigned long long)version;

@end
