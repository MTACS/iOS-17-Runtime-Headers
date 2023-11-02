
@interface VNTranslationalImageRegistrationRequest : VNImageRegistrationRequest

@property (readonly, copy) NSArray *results;

- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;

@end
