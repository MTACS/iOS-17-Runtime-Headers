
@interface TPSDeviceCapabilityCondition : TPSCondition

@property (nonatomic, copy) NSArray *values;

- (id)_valuesFromValuesArray:(id)arg1;
- (id)init;
- (id)targetingValidations;

@end
