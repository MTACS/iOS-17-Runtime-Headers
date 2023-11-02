
@interface VN6kBnCOr2mZlSV6yV1dLwB : VNImageBasedRequest

@property (nonatomic, readonly) unsigned long long imageSignatureHashType;
@property (nonatomic, readonly) unsigned long long imageSignatureprintType;
@property (nonatomic, copy) VN6Ac6Cyl5O5oK19HboyMBR *inputSignatureprint;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatibility;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (bool)warmUpSession:(id)arg1 error:(id*)arg2;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (long long)dependencyProcessingOrdinality;
- (id)description;
- (unsigned long long)imageSignatureHashType;
- (unsigned long long)imageSignatureprintType;
- (id)imageSignaturnprintByRunningNeuralHashprintRequest:(id)arg1 error:(id*)arg2;
- (id)initWithImageSignatureprintType:(unsigned long long)arg1 imageSignatureHashType:(unsigned long long)arg2;
- (id)initWithImageSignatureprintType:(unsigned long long)arg1 imageSignatureHashType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)inputSignatureprint;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (void)setImageSignatureHashType:(unsigned long long)arg1;
- (void)setImageSignatureprintType:(unsigned long long)arg1;
- (void)setInputSignatureprint:(id)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
