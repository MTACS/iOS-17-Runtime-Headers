
@interface PHASESpatialModelerSendDefinition : PHASEDefinition {
    double  _sendLevel;
    PHASENumberMetaParameterDefinition * _sendMetaParameterDefinition;
    long long  _spatialModelerType;
    NSMutableDictionary * _tweakParams;
}

@property (nonatomic) double sendLevel;
@property (nonatomic, retain) PHASENumberMetaParameterDefinition *sendMetaParameterDefinition;
@property (nonatomic, readonly) long long spatialModelerType;
@property (nonatomic, retain) NSMutableDictionary *tweakParams;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSpatialModelerType:(long long)arg1;
- (id)initWithSpatialModelerType:(long long)arg1 uid:(id)arg2;
- (double)sendLevel;
- (id)sendMetaParameterDefinition;
- (void)setSendLevel:(double)arg1;
- (void)setSendMetaParameterDefinition:(id)arg1;
- (void)setTweakParameterWithMetaParameterDefinition:(id)arg1 uid:(id)arg2;
- (void)setTweakParameterWithValue:(double)arg1 uid:(id)arg2;
- (void)setTweakParams:(id)arg1;
- (long long)spatialModelerType;
- (id)tweakParams;

@end
