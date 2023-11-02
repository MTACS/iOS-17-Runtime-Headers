
@interface VNCreateSceneprintRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;
@property (nonatomic) bool returnAllResults;
@property (nonatomic) bool useCenterTileOnly;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (bool)recordSpecifierModelEquivalenciesInRegistrar:(id)arg1 error:(id*)arg2;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)VNImageProcessingSessionPrintKeyPath;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)description;
- (bool)hasCancellationHook;
- (unsigned long long)imageCropAndScaleOption;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (bool)returnAllResults;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setReturnAllResults:(bool)arg1;
- (void)setUseCenterTileOnly:(bool)arg1;
- (id)supportedImageSizeSet;
- (bool)useCenterTileOnly;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_sceneRequest;
+ (id)vcp_sceneRequestForWallpaper;

@end
