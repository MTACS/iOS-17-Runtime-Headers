
@interface PHASEMixerDefinition : PHASEDefinition {
    double  _gain;
    PHASENumberMetaParameterDefinition * _gainMetaParameterDefinition;
}

@property (nonatomic) double gain;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition;

+ (id)new;

- (void).cxx_destruct;
- (double)gain;
- (id)gainMetaParameterDefinition;
- (id)init;
- (id)initInternal;
- (void)setGain:(double)arg1;
- (void)setGainMetaParameterDefinition:(id)arg1;

@end
