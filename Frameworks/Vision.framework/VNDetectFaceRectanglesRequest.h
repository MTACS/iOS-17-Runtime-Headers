
@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest

@property (nonatomic) bool faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) bool faceCoreExtractBlink;
@property (nonatomic) bool faceCoreExtractSmile;
@property (nonatomic, retain) NSNumber *faceCoreInitialAngle;
@property (nonatomic, retain) NSNumber *faceCoreMinFaceSize;
@property (nonatomic, retain) NSNumber *faceCoreNumberOfDetectionAngles;
@property (nonatomic) unsigned long long faceCoreType;
@property (nonatomic) float precisionRecallThreshold;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (bool)recordSpecifierModelEquivalenciesInRegistrar:(id)arg1 error:(id*)arg2;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (long long)dependencyProcessingOrdinality;
- (bool)faceCoreEnhanceEyesAndMouthLocalization;
- (bool)faceCoreExtractBlink;
- (bool)faceCoreExtractSmile;
- (id)faceCoreInitialAngle;
- (id)faceCoreMinFaceSize;
- (id)faceCoreNumberOfDetectionAngles;
- (unsigned long long)faceCoreType;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)precisionRecallThreshold;
- (void)setFaceCoreEnhanceEyesAndMouthLocalization:(bool)arg1;
- (void)setFaceCoreExtractBlink:(bool)arg1;
- (void)setFaceCoreExtractSmile:(bool)arg1;
- (void)setFaceCoreInitialAngle:(id)arg1;
- (void)setFaceCoreMinFaceSize:(id)arg1;
- (void)setFaceCoreNumberOfDetectionAngles:(id)arg1;
- (void)setFaceCoreType:(unsigned long long)arg1;
- (void)setPrecisionRecallThreshold:(float)arg1;
- (void)setProcessedResults:(id)arg1;
- (bool)warmUpSession:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
