
@interface FASettingsPresetConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _values;
}

@property (nonatomic, readonly, copy) NSDictionary *values;

+ (id)boolKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidBoolValue:(id)arg1;
- (bool)isValidTriState:(id)arg1;
- (id)validatedValuesFromValues:(id)arg1;
- (id)values;

@end
