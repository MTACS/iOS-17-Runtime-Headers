
@interface HPIntegerSettingValue : HPSettingValue <NSSecureCoding> {
    double  _doubleValue;
    float  _floatValue;
    long long  _integerValue;
    NSNumber * _numberValue;
}

@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) float floatValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, retain) NSNumber *numberValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 numberValue:(id)arg2;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)numberValue;
- (void)setNumberValue:(id)arg1;

@end
