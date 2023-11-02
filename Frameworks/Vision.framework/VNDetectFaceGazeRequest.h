
@interface VNDetectFaceGazeRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (nonatomic) float commonGazeLocationRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float gazeHeatMapThreshold;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (nonatomic) float minimumFaceDimension;
@property (nonatomic) bool resolveSomewhereElseDirection;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestMappingTable;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (float)commonGazeLocationRadius;
- (long long)dependencyProcessingOrdinality;
- (float)gazeHeatMapThreshold;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)minimumFaceDimension;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (bool)resolveSomewhereElseDirection;
- (void)setCommonGazeLocationRadius:(float)arg1;
- (void)setGazeHeatMapThreshold:(float)arg1;
- (void)setMinimumFaceDimension:(float)arg1;
- (void)setResolveSomewhereElseDirection:(bool)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
