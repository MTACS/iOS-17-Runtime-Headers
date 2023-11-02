
@interface AXMVariablePitchTone : AXMTone {
    NSArray * _keyPitches;
}

- (void).cxx_destruct;
- (unsigned long long)_bufferFrameForKeyPitch:(id)arg1;
- (id)initWithKeyPitches:(id)arg1 sampleRate:(double)arg2 envelope:(id)arg3;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (void)renderInBuffer:(void*)arg1 atFrame:(unsigned long long)arg2;

@end
