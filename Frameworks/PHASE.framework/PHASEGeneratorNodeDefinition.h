
@interface PHASEGeneratorNodeDefinition : PHASESoundEventNodeDefinition {
    long long  _calibrationMode;
    double  _gain;
    PHASENumberMetaParameterDefinition * _gainMetaParameterDefinition;
    PHASEGroup * _group;
    double  _level;
    PHASEMixerDefinition * _mixerDefinition;
    double  _rate;
    PHASENumberMetaParameterDefinition * _rateMetaParameterDefinition;
}

@property (readonly) long long calibrationMode;
@property (nonatomic) double gain;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition;
@property (nonatomic) PHASEGroup *group;
@property (readonly) double level;
@property (nonatomic, readonly) PHASEMixerDefinition *mixerDefinition;
@property (nonatomic) double rate;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *rateMetaParameterDefinition;

+ (id)new;

- (void).cxx_destruct;
- (long long)calibrationMode;
- (double)gain;
- (id)gainMetaParameterDefinition;
- (id)group;
- (id)init;
- (id)initInternal:(id)arg1;
- (double)level;
- (id)mixerDefinition;
- (double)rate;
- (id)rateMetaParameterDefinition;
- (void)setCalibrationMode:(long long)arg1 level:(double)arg2;
- (void)setGain:(double)arg1;
- (void)setGainMetaParameterDefinition:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setRate:(double)arg1;
- (void)setRateMetaParameterDefinition:(id)arg1;

@end
