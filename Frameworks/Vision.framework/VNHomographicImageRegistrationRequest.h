
@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest

@property (readonly, copy) NSArray *results;

- (bool)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)wantsSequencedRequestObservationsRecording;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
