
@interface REComparisonCondition : RECondition

+ (id)conditionForLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3;
+ (id)falseCondition;
+ (id)trueCondition;

- (id)_inflectionFeatureValuePairs;
- (bool)_validForRanking;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
