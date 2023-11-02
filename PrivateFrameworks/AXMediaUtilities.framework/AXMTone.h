
@interface AXMTone : NSObject {
    double  _aWeighting;
    AXMADSREnvelope * _envelope;
    double  _frequency;
    double  _gain;
    AXMSynthPatch * _patch;
    unsigned long long  _sampleRate;
}

@property (nonatomic, readonly) double aWeighting;
@property (nonatomic, readonly) AXMADSREnvelope *envelope;
@property (nonatomic, readonly) double frequency;
@property (nonatomic) double gain;
@property (nonatomic, retain) AXMSynthPatch *patch;
@property (nonatomic) unsigned long long sampleRate;

- (void).cxx_destruct;
- (double)_rawValueForTonePhase:(double)arg1;
- (void)_setFrequency:(double)arg1;
- (double)aWeighting;
- (id)envelope;
- (double)frequency;
- (double)gain;
- (id)init;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (id)patch;
- (void)renderInBuffer:(void*)arg1 atFrame:(unsigned long long)arg2;
- (unsigned long long)sampleRate;
- (void)setGain:(double)arg1;
- (void)setPatch:(id)arg1;
- (void)setSampleRate:(unsigned long long)arg1;

@end
