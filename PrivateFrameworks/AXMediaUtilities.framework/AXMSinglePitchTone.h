
@interface AXMSinglePitchTone : AXMTone

- (id)initWithFrequency:(double)arg1 sampleRate:(double)arg2 envelope:(id)arg3;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (void)renderInBuffer:(void*)arg1 atFrame:(unsigned long long)arg2;

@end
