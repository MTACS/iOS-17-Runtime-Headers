
@interface REFilteringRule : RERule <REAutomaticExportedInterface> {
    RECondition * _condition;
    REConditionEvaluator * _conditionEvaluator;
    unsigned long long  _type;
}

@property (nonatomic, readonly) RECondition *condition;
@property (nonatomic, readonly) REConditionEvaluator *conditionEvaluator;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)condition;
- (id)conditionEvaluator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithCondition:(id)arg1;
- (id)initWithCondition:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
