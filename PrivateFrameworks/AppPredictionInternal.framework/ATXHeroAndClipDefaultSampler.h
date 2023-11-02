
@interface ATXHeroAndClipDefaultSampler : NSObject <ATXHeroAndClipEventSamplerProtocol>

- (bool)_isEventEligibleForSampling:(id)arg1;
- (id)sampleEvents:(id)arg1 numToSample:(unsigned long long)arg2;

@end
