
@interface TPSInclusivityCondition : TPSCondition

@property (nonatomic, copy) NSArray *values;

- (id)_valuesFromValueTypeArray:(id)arg1;
- (id)_valuesFromValuesArray:(id)arg1;

@end
