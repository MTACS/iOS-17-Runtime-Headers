
@interface VNCreateTorsoprintRequest : VNImageBasedRequest <VNDetectedObjectObservationAccepting, VNFaceObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputDetectedObjectObservations;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatibility;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (bool)_processFaceBasedInputInContext:(id)arg1 revision:(unsigned long long)arg2 torsosThatNeedNoProcessing:(id)arg3 torsosThatNeedTorsoprints:(id)arg4 error:(id*)arg5;
- (bool)_processHumanBodyBasedInputInContext:(id)arg1 revision:(unsigned long long)arg2 torsosThatNeedNoProcessing:(id)arg3 torsosThatNeedTorsoprints:(id)arg4 error:(id*)arg5;
- (id)_processHumanBodyObservations:(id)arg1 revision:(unsigned long long)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(id)arg4 error:(id*)arg5;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (long long)dependencyProcessingOrdinality;
- (id)detectHumanBodiesInContext:(id)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;

@end
