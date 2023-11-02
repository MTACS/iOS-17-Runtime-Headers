
@interface MRUWaveformSettings : NSObject {
    NSArray * _adjustmentCoefficients;
    float  _amplitudeGain;
    float  _animationDuration;
    float  _artworkBlur;
    float  _artworkSaturation;
    float  _exponentialGain;
    float  _framerateThreshold;
    float  _frequencyExponent;
    float  _maxArtworkLuminance;
    int  _maximumFramerate;
    float  _minArtworkLuminance;
    int  _minimumFramerate;
    float  _opacity;
    float  _pausedAnimationDuration;
    float  _pausedSpringDamping;
    float  _samplingRefreshRate;
    float  _springDamping;
    NSArray * _stops;
    float  _xScaleMultiplier;
}

@property (nonatomic, retain) NSArray *adjustmentCoefficients;
@property (nonatomic) float amplitudeGain;
@property (nonatomic) float animationDuration;
@property (nonatomic) float artworkBlur;
@property (nonatomic) float artworkSaturation;
@property (nonatomic) float exponentialGain;
@property (nonatomic) float framerateThreshold;
@property (nonatomic) float frequencyExponent;
@property (nonatomic) float maxArtworkLuminance;
@property (nonatomic) int maximumFramerate;
@property (nonatomic) float minArtworkLuminance;
@property (nonatomic) int minimumFramerate;
@property (nonatomic) float opacity;
@property (nonatomic) float pausedAnimationDuration;
@property (nonatomic) float pausedSpringDamping;
@property (nonatomic) float samplingRefreshRate;
@property (nonatomic) float springDamping;
@property (nonatomic, retain) NSArray *stops;
@property (nonatomic) float xScaleMultiplier;

+ (id)ambientSettings;
+ (id)currentSettings;

- (void).cxx_destruct;
- (id)adjustmentCoefficients;
- (float)amplitudeGain;
- (float)animationDuration;
- (float)artworkBlur;
- (float)artworkSaturation;
- (float)exponentialGain;
- (float)framerateThreshold;
- (float)frequencyExponent;
- (float)maxArtworkLuminance;
- (int)maximumFramerate;
- (float)minArtworkLuminance;
- (int)minimumFramerate;
- (float)opacity;
- (float)pausedAnimationDuration;
- (float)pausedSpringDamping;
- (float)samplingRefreshRate;
- (void)setAdjustmentCoefficients:(id)arg1;
- (void)setAmplitudeGain:(float)arg1;
- (void)setAnimationDuration:(float)arg1;
- (void)setArtworkBlur:(float)arg1;
- (void)setArtworkSaturation:(float)arg1;
- (void)setExponentialGain:(float)arg1;
- (void)setFramerateThreshold:(float)arg1;
- (void)setFrequencyExponent:(float)arg1;
- (void)setMaxArtworkLuminance:(float)arg1;
- (void)setMaximumFramerate:(int)arg1;
- (void)setMinArtworkLuminance:(float)arg1;
- (void)setMinimumFramerate:(int)arg1;
- (void)setOpacity:(float)arg1;
- (void)setPausedAnimationDuration:(float)arg1;
- (void)setPausedSpringDamping:(float)arg1;
- (void)setSamplingRefreshRate:(float)arg1;
- (void)setSpringDamping:(float)arg1;
- (void)setStops:(id)arg1;
- (void)setXScaleMultiplier:(float)arg1;
- (float)springDamping;
- (id)stops;
- (float)xScaleMultiplier;

@end
