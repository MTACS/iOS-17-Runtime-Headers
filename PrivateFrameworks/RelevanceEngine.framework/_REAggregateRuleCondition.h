
@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface> {
    NSSet * _conditions;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSSet *conditions;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3;
- (bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (bool)_needsProbability;
- (id)_notCondition;
- (bool)_requiresTwoFeatures;
- (bool)_validForRanking;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)hash;
- (id)initWithConditions:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
