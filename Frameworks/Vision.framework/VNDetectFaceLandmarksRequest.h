
@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (nonatomic, retain) NSNumber *cascadeStepCount;
@property unsigned long long constellation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (nonatomic) bool performBlinkDetection;
@property (nonatomic) bool refineLeftEyeRegion;
@property (nonatomic) bool refineMouthRegion;
@property (nonatomic) bool refineRightEyeRegion;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatibility;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestMappingTable;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (bool)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)cascadeStepCount;
- (unsigned long long)constellation;
- (long long)dependencyProcessingOrdinality;
- (id)description;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (bool)performBlinkDetection;
- (bool)refineLeftEyeRegion;
- (bool)refineMouthRegion;
- (bool)refineRightEyeRegion;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)arg1;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;
- (void)setCascadeStepCount:(id)arg1;
- (void)setConstellation:(unsigned long long)arg1;
- (void)setPerformBlinkDetection:(bool)arg1;
- (void)setProcessedResults:(id)arg1;
- (void)setRefineLeftEyeRegion:(bool)arg1;
- (void)setRefineMouthRegion:(bool)arg1;
- (void)setRefineRightEyeRegion:(bool)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
