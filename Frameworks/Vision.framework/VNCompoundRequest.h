
@interface VNCompoundRequest : VNRequest {
    NSNumber * _cachedDependencyProcessingOrdinality;
    NSArray * _originalRequests;
}

@property (nonatomic, readonly, copy) NSArray *originalRequests;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3;
+ (id)computeStageDeviceAssignmentsForOriginalRequests:(id)arg1;
+ (bool)supportedRevisionsAreFilteredBasedOnAvailableComputeDevices;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)compoundResults;
- (long long)dependencyProcessingOrdinality;
- (id)description;
- (id)initWithOriginalRequests:(id)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (unsigned long long)ioSurfaceMemoryPoolId;
- (id)originalRequests;
- (void)recordWarningsInOriginalRequests;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)sequencedRequestPreviousObservationsKey;
- (bool)usesCPUOnly;

@end
