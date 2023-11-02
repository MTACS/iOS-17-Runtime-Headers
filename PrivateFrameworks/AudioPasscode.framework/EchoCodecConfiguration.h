
@interface EchoCodecConfiguration : AUPasscodeCodecConfiguration <NSCopying> {
    unsigned long long  _algorithmVersionNumber;
    float  _delayForBit0;
    float  _delayForBit1;
    float  _echoGainDB;
    unsigned long long  _frameSize;
    bool  _hfNoiseFillingFlag;
    float  _hpfCutOffFreq;
    float  _noiseGainDB;
    unsigned long long  _numFrameRepeat;
    unsigned long long  _randomSeed;
    float  _syncDetectThreshold;
}

@property (nonatomic) unsigned long long algorithmVersionNumber;
@property (nonatomic) float delayForBit0;
@property (nonatomic) float delayForBit1;
@property (nonatomic) float echoGainDB;
@property (nonatomic) unsigned long long frameSize;
@property (nonatomic) bool hfNoiseFillingFlag;
@property (nonatomic) float hpfCutOffFreq;
@property (nonatomic) float noiseGainDB;
@property (nonatomic) unsigned long long numFrameRepeat;
@property (nonatomic) unsigned long long randomSeed;
@property (nonatomic) float syncDetectThreshold;

+ (bool)supportsSecureCoding;

- (unsigned long long)algorithmVersionNumber;
- (id)commandLineOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)delayForBit0;
- (float)delayForBit1;
- (float)echoGainDB;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameSize;
- (bool)hfNoiseFillingFlag;
- (float)hpfCutOffFreq;
- (id)init;
- (id)initWithCapabilityData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandLineArgs:(id)arg1;
- (float)noiseGainDB;
- (unsigned long long)numFrameRepeat;
- (unsigned long long)randomSeed;
- (void)setAlgorithmVersionNumber:(unsigned long long)arg1;
- (void)setDefaultValues;
- (void)setDelayForBit0:(float)arg1;
- (void)setDelayForBit1:(float)arg1;
- (void)setEchoGainDB:(float)arg1;
- (void)setFrameSize:(unsigned long long)arg1;
- (void)setHfNoiseFillingFlag:(bool)arg1;
- (void)setHpfCutOffFreq:(float)arg1;
- (void)setNoiseGainDB:(float)arg1;
- (void)setNumFrameRepeat:(unsigned long long)arg1;
- (void)setRandomSeed:(unsigned long long)arg1;
- (void)setSyncDetectThreshold:(float)arg1;
- (float)syncDetectThreshold;

@end
