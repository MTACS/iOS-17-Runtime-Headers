
@interface AVAudioUnitEQFilterParameters : NSObject {
    void * _impl;
}

@property (nonatomic) float bandwidth;
@property (nonatomic) bool bypass;
@property (nonatomic) long long filterType;
@property (nonatomic) float frequency;
@property (nonatomic) float gain;

- (float)bandwidth;
- (bool)bypass;
- (void)dealloc;
- (long long)filterType;
- (float)frequency;
- (float)gain;
- (id)init;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl { int (**x1)(); struct AVAudioNodeImplBase {} *x2; }*)arg1;
- (void)setBandwidth:(float)arg1;
- (void)setBypass:(bool)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFrequency:(float)arg1;
- (void)setGain:(float)arg1;

@end
