
@interface VNClassifyMemeImageRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)supportedIdentifiersAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_sceneRequest;

@end
