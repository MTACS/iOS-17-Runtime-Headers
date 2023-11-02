
@interface PHASEBlendNodeDefinition : PHASESoundEventNodeDefinition {
    PHASENumberMetaParameterDefinition * _blendParameterDefinition;
    NSMutableArray * _ranges;
    PHASESpatialMixerDefinition * _spatialMixerDefinitionForDistance;
}

@property (nonatomic, readonly) PHASENumberMetaParameterDefinition *blendParameterDefinition;
@property (nonatomic, retain) NSMutableArray *ranges;
@property (nonatomic, readonly) PHASESpatialMixerDefinition *spatialMixerDefinitionForDistance;

+ (id)new;

- (void).cxx_destruct;
- (void)addRangeForInputValuesAbove:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subTree:(id)arg4;
- (void)addRangeForInputValuesAbove:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subtree:(id)arg4;
- (void)addRangeForInputValuesBelow:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subTree:(id)arg4;
- (void)addRangeForInputValuesBelow:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subtree:(id)arg4;
- (void)addRangeForInputValuesBetween:(double)arg1 highValue:(double)arg2 fullGainAtLowValue:(double)arg3 fullGainAtHighValue:(double)arg4 lowFadeCurveType:(long long)arg5 highFadeCurveType:(long long)arg6 subTree:(id)arg7;
- (void)addRangeForInputValuesBetween:(double)arg1 highValue:(double)arg2 fullGainAtLowValue:(double)arg3 fullGainAtHighValue:(double)arg4 lowFadeCurveType:(long long)arg5 highFadeCurveType:(long long)arg6 subtree:(id)arg7;
- (void)addRangeWithEnvelope:(id)arg1 subTree:(id)arg2;
- (void)addRangeWithEnvelope:(id)arg1 subtree:(id)arg2;
- (id)blendParameterDefinition;
- (id)children;
- (id)init;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)arg1;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)arg1 identifier:(id)arg2;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)arg1 uid:(id)arg2;
- (id)initWithBlendMetaParameterDefinition:(id)arg1;
- (id)initWithBlendMetaParameterDefinition:(id)arg1 identifier:(id)arg2;
- (id)initWithBlendMetaParameterDefinition:(id)arg1 uid:(id)arg2;
- (id)ranges;
- (void)setRanges:(id)arg1;
- (id)spatialMixerDefinitionForDistance;

@end
