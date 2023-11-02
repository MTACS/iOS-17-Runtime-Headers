
@interface _REFeatureComparisonCondition : REComparisonCondition <REAutomaticExportedInterface> {
    REFeature * _leftFeature;
    long long  _relation;
    REFeature * _rightFeature;
}

@property (nonatomic, readonly) REFeature *leftFeature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) REFeature *rightFeature;

- (void).cxx_destruct;
- (bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (bool)_requiresTwoFeatures;
- (bool)_validForRanking;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)leftFeature;
- (long long)relation;
- (id)rightFeature;

@end
