
@protocol ARResultData <ARData>

@optional

- (NSArray *)anchorsForCameraWithTransform:(void *)arg1 referenceOriginTransform:(void *)arg2 existingAnchors:(void *)arg3 anchorsToRemove:(void *)arg4; // needs 4 arg types, found 3: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, NSArray *, NSMutableArray *
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (NSArray *)externalAnchorsWithReferenceOriginTransform:(void *)arg1 existingAnchors:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (ARPointCloud *)featurePoints;
- (ARLightEstimate *)lightEstimate;
- (struct __CVBuffer { }*)segmentationBuffer;
- (double)timestamp;
- (unsigned long long)worldAlignmentModifiers;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldAlignmentTransform;
- (ARWorldTrackingState *)worldTrackingState;

@end
