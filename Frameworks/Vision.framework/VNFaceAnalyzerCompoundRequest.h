
@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest

+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3;
+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (long long)dependencyProcessingOrdinality;
- (unsigned long long)detectionLevel;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;

@end
