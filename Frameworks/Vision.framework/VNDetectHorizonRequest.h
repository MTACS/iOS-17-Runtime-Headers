
@interface VNDetectHorizonRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;

@end
