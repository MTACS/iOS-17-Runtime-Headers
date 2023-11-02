
@interface VNCreateAnimalprintRequest : VNImageBasedRequest <VNDetectedObjectObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputDetectedObjectObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;

+ (bool)_isAnimalFaceprintingSupportedForRequestRevision:(unsigned long long)arg1;
+ (id)createVNEntityIdentificationModelEntryPrintForRevision:(unsigned long long)arg1 fromDescriptorData:(const void*)arg2 length:(unsigned long long)arg3 elementCount:(unsigned long long)arg4 error:(id*)arg5;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestMappingTable;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (bool)recordSpecifierModelEquivalenciesInRegistrar:(id)arg1 error:(id*)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void)_determineAnimalsToProcessFrom:(id)arg1 outputAnimalsThatNeedNoProcessing:(id)arg2 outputAnimalsThatNeedAnimalprints:(id)arg3;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;

@end
