
@interface VNCreateFaceprintRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceFaceprintCreation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)createVNEntityIdentificationModelEntryPrintForRevision:(unsigned long long)arg1 fromDescriptorData:(const void*)arg2 length:(unsigned long long)arg3 elementCount:(unsigned long long)arg4 error:(id*)arg5;
+ (unsigned long long)defaultRevision;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (id)publicRevisionsSet;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (long long)dependencyProcessingOrdinality;
- (bool)forceFaceprintCreation;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;
- (void)setForceFaceprintCreation:(bool)arg1;
- (bool)warmUpSession:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
