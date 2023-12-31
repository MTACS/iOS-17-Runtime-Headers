
@interface ICSMultiValueProperty : ICSProperty

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (bool)isMultiValued;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (void)setValues:(id)arg1 valueType:(unsigned long long)arg2;
- (id)value;
- (id)values;

@end
