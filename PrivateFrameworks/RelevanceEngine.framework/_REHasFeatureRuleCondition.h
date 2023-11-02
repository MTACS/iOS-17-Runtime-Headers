
@interface _REHasFeatureRuleCondition : RECondition <REAutomaticExportedInterface> {
    bool  _contains;
    REFeature * _feature;
}

@property (nonatomic, readonly) bool contains;
@property (nonatomic, readonly) REFeature *feature;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (bool)contains;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 contains:(bool)arg2;
- (bool)isEqual:(id)arg1;

@end
