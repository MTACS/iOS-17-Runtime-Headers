
@interface AXMCompressor : AXMAudioEffect {
    double  _attackMS;
    double  _compressionRatio;
    double  _ema;
    unsigned long long  _emaSamples;
    double  _engagement;
    double  _gain;
    double  _gainReduction;
    double  _ratio;
    double  _releaseMS;
    double  _sampleRate;
    double  _threshold;
}

@property (nonatomic) double attackMS;
@property (nonatomic) double compressionRatio;
@property (nonatomic) double ema;
@property (nonatomic) unsigned long long emaSamples;
@property (nonatomic) double engagement;
@property (nonatomic) double gain;
@property (nonatomic) double gainReduction;
@property (nonatomic) double ratio;
@property (nonatomic) double releaseMS;
@property (nonatomic) double sampleRate;
@property (nonatomic) double threshold;

+ (id)compressor;
+ (id)limiter;

- (double)attackMS;
- (double)compressionRatio;
- (double)ema;
- (unsigned long long)emaSamples;
- (double)engagement;
- (double)gain;
- (double)gainReduction;
- (id)initWithAttack:(double)arg1 release:(double)arg2 compressionRatio:(double)arg3 threshold:(double)arg4 sampleRate:(double)arg5;
- (void)processSamples:(unsigned long long)arg1;
- (double)ratio;
- (double)releaseMS;
- (double)sampleRate;
- (void)setAttackMS:(double)arg1;
- (void)setCompressionRatio:(double)arg1;
- (void)setEma:(double)arg1;
- (void)setEmaSamples:(unsigned long long)arg1;
- (void)setEngagement:(double)arg1;
- (void)setGain:(double)arg1;
- (void)setGainReduction:(double)arg1;
- (void)setRatio:(double)arg1;
- (void)setReleaseMS:(double)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setThreshold:(double)arg1;
- (double)threshold;

@end
