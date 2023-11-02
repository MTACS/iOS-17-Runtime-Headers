
@interface ATXHeroAndClipDebugSampler : NSObject <ATXHeroAndClipEventSamplerProtocol> {
    NSArray * _indicesToSample;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSampleIndices:(id)arg1;
- (id)sampleEvents:(id)arg1 numToSample:(unsigned long long)arg2;

@end
