
@interface VNDetectFaceCaptureQualityRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatibility;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;

@end
