
@interface RECondition : NSObject <NSCopying, REAutomaticExportedInterface>

+ (id)andConditions:(id)arg1;
+ (id)conditionForFeature:(id)arg1 hasBoolValue:(bool)arg2;
+ (id)conditionForFeature:(id)arg1 hasIntegerValue:(long long)arg2;
+ (id)conditionForFeature:(id)arg1 hasValue:(id)arg2;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 integerValue:(long long)arg3;
+ (id)conditionForProbabilityForInteraction:(id)arg1 relation:(long long)arg2 feature:(id)arg3;
+ (id)conditionForProbabilityForInteraction:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3;
+ (id)conditionForProbabilityWithRelation:(long long)arg1 floatValue:(float)arg2;
+ (id)conditionHasValueForFeature:(id)arg1;
+ (id)falseCondition;
+ (id)notCondition:(id)arg1;
+ (id)orConditions:(id)arg1;
+ (id)trueCondition;

- (bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3;
- (bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (bool)_needsProbability;
- (id)_notCondition;
- (bool)_requiresTwoFeatures;
- (bool)_validForRanking;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
