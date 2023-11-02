
@interface PHASEMappedMetaParameterDefinition : PHASENumberMetaParameterDefinition {
    PHASEEnvelope * _envelope;
    PHASENumberMetaParameterDefinition * _inputMetaParameterDefinition;
}

@property (nonatomic, readonly) PHASEEnvelope *envelope;
@property (nonatomic, readonly) PHASENumberMetaParameterDefinition *inputMetaParameterDefinition;
@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;

+ (id)new;

- (void).cxx_destruct;
- (id)envelope;
- (id)init;
- (id)initWithInputMetaParameterDefinition:(id)arg1 envelope:(id)arg2;
- (id)initWithInputMetaParameterDefinition:(id)arg1 envelope:(id)arg2 identifier:(id)arg3;
- (id)initWithInputMetaParameterDefinition:(id)arg1 envelope:(id)arg2 uid:(id)arg3;
- (id)initWithValue:(double)arg1;
- (id)initWithValue:(double)arg1 identifier:(id)arg2;
- (id)initWithValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3;
- (id)initWithValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3 identifier:(id)arg4;
- (id)inputMetaParameterDefinition;

@end
