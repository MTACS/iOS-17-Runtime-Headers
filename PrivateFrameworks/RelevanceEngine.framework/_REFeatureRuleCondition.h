
@interface _REFeatureRuleCondition : RECondition <REAutomaticExportedInterface> {
    REFeature * _firstFeature;
    long long  _relation;
    REFeature * _secondFeature;
}

@property (nonatomic, readonly) REFeature *firstFeature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) REFeature *secondFeature;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (bool)_requiresTwoFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firstFeature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)relation;
- (id)secondFeature;

@end
