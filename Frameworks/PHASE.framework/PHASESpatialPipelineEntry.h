
@interface PHASESpatialPipelineEntry : NSObject {
    double  _sendLevel;
    PHASENumberMetaParameterDefinition * _sendLevelMetaParameterDefinition;
    NSMutableDictionary * _tweakParams;
}

@property (nonatomic) double sendLevel;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *sendLevelMetaParameterDefinition;
@property (nonatomic, retain) NSMutableDictionary *tweakParams;

- (void).cxx_destruct;
- (id)init;
- (double)sendLevel;
- (id)sendLevelMetaParameterDefinition;
- (void)setSendLevel:(double)arg1;
- (void)setSendLevelMetaParameterDefinition:(id)arg1;
- (void)setTweakParameterWithMetaParameterDefinition:(id)arg1 identifier:(id)arg2;
- (void)setTweakParameterWithMetaParameterDefinition:(id)arg1 uid:(id)arg2;
- (void)setTweakParameterWithValue:(double)arg1 identifier:(id)arg2;
- (void)setTweakParameterWithValue:(double)arg1 uid:(id)arg2;
- (void)setTweakParams:(id)arg1;
- (id)tweakParams;

@end
