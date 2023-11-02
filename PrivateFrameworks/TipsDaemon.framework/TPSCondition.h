
@interface TPSCondition : TPSSerializableObject <TPSValidatable> {
    NSString * _identifier;
    long long  _joinType;
    long long  _type;
    NSArray * _validations;
    NSString * _valueType;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultJoinType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long joinType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *targetingValidations;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *valueType;
@property (nonatomic, copy) NSArray *values;

+ (id)conditionFromDictionary:(id)arg1;
+ (long long)typeFromConditionDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_valuesFromValuesArray:(id)arg1;
- (id)debugDescription;
- (long long)defaultJoinType;
- (void)getCurrentStateWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (long long)joinType;
- (void)setIdentifier:(id)arg1;
- (void)setJoinType:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setValueType:(id)arg1;
- (void)setValues:(id)arg1;
- (id)targetingValidations;
- (long long)type;
- (void)validateWithCompletion:(id /* block */)arg1;
- (id)valueType;
- (id)values;

@end
