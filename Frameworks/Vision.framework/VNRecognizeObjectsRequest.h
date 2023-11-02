
@interface VNRecognizeObjectsRequest : VNImageBasedRequest

@property unsigned long long imageCropAndScaleOption;
@property float modelMinimumDetectionConfidence;
@property float modelNonMaximumSuppressionThreshold;
@property (readonly, copy) NSArray *results;
@property bool useImageAnalyzerScaling;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)knownObjectIdentifiersRecognizedByRequestRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (id)privateRevisionsSet;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)imageCropAndScaleOption;
- (float)modelMinimumDetectionConfidence;
- (float)modelNonMaximumSuppressionThreshold;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setModelMinimumDetectionConfidence:(float)arg1;
- (void)setModelNonMaximumSuppressionThreshold:(float)arg1;
- (void)setUseImageAnalyzerScaling:(bool)arg1;
- (id)supportedIdentifiersAndReturnError:(id*)arg1;
- (bool)useImageAnalyzerScaling;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_sceneRequest;

@end
