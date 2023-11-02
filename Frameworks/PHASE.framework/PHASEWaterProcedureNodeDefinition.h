
@interface PHASEWaterProcedureNodeDefinition : PHASEProcedureNodeDefinition {
    double  _averageDropDiameter;
    PHASENumberMetaParameterDefinition * _averageDropDiameterMetaParameterDefinition;
    double  _baseFrequencyMultiplier;
    PHASENumberMetaParameterDefinition * _baseFrequencyMultiplierMetaParameterDefinition;
    double  _bubbleGain;
    PHASENumberMetaParameterDefinition * _bubbleGainMetaParameterDefinition;
    double  _chirpRiseRate;
    PHASENumberMetaParameterDefinition * _chirpRiseRateMetaParameterDefinition;
    double  _fallRate;
    PHASENumberMetaParameterDefinition * _fallRateMetaParameterDefinition;
    double  _impulseGain;
    double  _impulseGainExponent;
    PHASENumberMetaParameterDefinition * _impulseGainExponentMetaParameterDefinition;
    PHASENumberMetaParameterDefinition * _impulseGainMetaParameterDefinition;
    double  _impulseShape;
    PHASENumberMetaParameterDefinition * _impulseShapeMetaParameterDefinition;
    double  _maxDropDiameter;
    PHASENumberMetaParameterDefinition * _maxDropDiameterMetaParameterDefinition;
}

@property (nonatomic) double averageDropDiameter;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *averageDropDiameterMetaParameterDefinition;
@property (nonatomic) double baseFrequencyMultiplier;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *baseFrequencyMultiplierMetaParameterDefinition;
@property (nonatomic) double bubbleGain;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *bubbleGainMetaParameterDefinition;
@property (nonatomic) double chirpRiseRate;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *chirpRiseRateMetaParameterDefinition;
@property (nonatomic) double fallRate;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *fallRateMetaParameterDefinition;
@property (nonatomic) double impulseGain;
@property (nonatomic) double impulseGainExponent;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *impulseGainExponentMetaParameterDefinition;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *impulseGainMetaParameterDefinition;
@property (nonatomic) double impulseShape;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *impulseShapeMetaParameterDefinition;
@property (nonatomic) double maxDropDiameter;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *maxDropDiameterMetaParameterDefinition;

+ (id)new;

- (void).cxx_destruct;
- (double)averageDropDiameter;
- (id)averageDropDiameterMetaParameterDefinition;
- (double)baseFrequencyMultiplier;
- (id)baseFrequencyMultiplierMetaParameterDefinition;
- (double)bubbleGain;
- (id)bubbleGainMetaParameterDefinition;
- (double)chirpRiseRate;
- (id)chirpRiseRateMetaParameterDefinition;
- (double)fallRate;
- (id)fallRateMetaParameterDefinition;
- (double)impulseGain;
- (double)impulseGainExponent;
- (id)impulseGainExponentMetaParameterDefinition;
- (id)impulseGainMetaParameterDefinition;
- (double)impulseShape;
- (id)impulseShapeMetaParameterDefinition;
- (id)init;
- (id)initWithMixerDefinition:(id)arg1 maxPolyphony:(int)arg2 voiceStealingType:(long long)arg3;
- (id)initWithMixerDefinition:(id)arg1 maxPolyphony:(int)arg2 voiceStealingType:(long long)arg3 identifier:(id)arg4;
- (id)initWithMixerDefinition:(id)arg1 referenceGainDbSpl:(double)arg2 maxPolyphony:(int)arg3 voiceStealingType:(long long)arg4;
- (id)initWithMixerDefinition:(id)arg1 referenceGainDbSpl:(double)arg2 maxPolyphony:(int)arg3 voiceStealingType:(long long)arg4 uid:(id)arg5;
- (double)maxDropDiameter;
- (id)maxDropDiameterMetaParameterDefinition;
- (void)setAverageDropDiameter:(double)arg1;
- (void)setAverageDropDiameterMetaParameterDefinition:(id)arg1;
- (void)setBaseFrequencyMultiplier:(double)arg1;
- (void)setBaseFrequencyMultiplierMetaParameterDefinition:(id)arg1;
- (void)setBubbleGain:(double)arg1;
- (void)setBubbleGainMetaParameterDefinition:(id)arg1;
- (void)setChirpRiseRate:(double)arg1;
- (void)setChirpRiseRateMetaParameterDefinition:(id)arg1;
- (void)setFallRate:(double)arg1;
- (void)setFallRateMetaParameterDefinition:(id)arg1;
- (void)setImpulseGain:(double)arg1;
- (void)setImpulseGainExponent:(double)arg1;
- (void)setImpulseGainExponentMetaParameterDefinition:(id)arg1;
- (void)setImpulseGainMetaParameterDefinition:(id)arg1;
- (void)setImpulseShape:(double)arg1;
- (void)setImpulseShapeMetaParameterDefinition:(id)arg1;
- (void)setMaxDropDiameter:(double)arg1;
- (void)setMaxDropDiameterMetaParameterDefinition:(id)arg1;

@end
