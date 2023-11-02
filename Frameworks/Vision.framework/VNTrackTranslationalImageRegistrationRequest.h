
@interface VNTrackTranslationalImageRegistrationRequest : VNStatefulRequest {
    VNImageRegistrationSignature * _previousImageRegistrationSignature;
    unsigned long long  _previousRequestRevision;
}

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
