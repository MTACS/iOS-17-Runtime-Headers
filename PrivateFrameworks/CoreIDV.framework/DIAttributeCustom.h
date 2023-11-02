
@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)defaultValue;
- (void)encodeWithCoder:(id)arg1;
- (id)getCurrentValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)submissionString;

@end
