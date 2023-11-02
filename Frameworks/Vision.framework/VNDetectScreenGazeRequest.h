
@interface VNDetectScreenGazeRequest : VNStatefulRequest <VNFaceObservationAccepting> {
    VNScreenGazeState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) long long temporalSmoothingFrameCount;

+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;
+ (Class)configurationClass;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatibility;

- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;
- (void)setTemporalSmoothingFrameCount:(long long)arg1;
- (long long)temporalSmoothingFrameCount;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
