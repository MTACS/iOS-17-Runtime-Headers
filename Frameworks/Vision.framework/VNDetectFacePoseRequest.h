
@interface VNDetectFacePoseRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;

+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatibility;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestMappingTable;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;

@end
