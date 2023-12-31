
@interface STTemperature : STSiriModelObject {
    long long  _units;
    double  _value;
}

+ (bool)supportsSecureCoding;

- (id)_initWithValue:(double)arg1 units:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)units;
- (double)value;

@end
