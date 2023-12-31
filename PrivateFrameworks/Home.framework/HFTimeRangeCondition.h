
@interface HFTimeRangeCondition : HFTimeCondition {
    HFTimeCondition<HFPrimitiveTimeCondition> * _endCondition;
    HFTimeCondition<HFPrimitiveTimeCondition> * _startCondition;
}

@property (nonatomic, readonly) HFTimeCondition<HFPrimitiveTimeCondition> *endCondition;
@property (nonatomic, readonly) HFTimeCondition<HFPrimitiveTimeCondition> *startCondition;

+ (id)_primitiveTimePredicateClasses;

- (void).cxx_destruct;
- (id)description;
- (id)endCondition;
- (id)initWithPredicate:(id)arg1;
- (id)initWithStartCondition:(id)arg1 endCondition:(id)arg2;
- (id)startCondition;
- (unsigned long long)timeConditionType;

@end
