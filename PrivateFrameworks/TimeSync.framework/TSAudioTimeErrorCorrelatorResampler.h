
@interface TSAudioTimeErrorCorrelatorResampler : TSAudioTimeErrorCorrelator {
    float * _channelABuffer;
    float * _channelBBuffer;
    float * _correlationBuffer;
    float * _scratchBuffer;
    float * _upsamplerFilterCoefficientsBuffer;
    long long  _upsamplerFilterCoefficientsLength;
}

- (void)_makeBlock;
- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;

@end
