
@interface _REProbabilityRuleCondition : RECondition <REAutomaticExportedInterface> {
    REFeature * _feature;
    NSString * _interaction;
    long long  _relation;
    float  _threshold;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) NSString *interaction;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) float threshold;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (bool)_needsProbability;
- (id)_notCondition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithProbability:(id)arg1 relation:(long long)arg2 feature:(id)arg3 threshold:(float)arg4;
- (id)interaction;
- (bool)isEqual:(id)arg1;
- (long long)relation;
- (float)threshold;

@end
