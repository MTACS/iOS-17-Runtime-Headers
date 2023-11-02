
@interface DIAttributeFooter : DIAttributeLabel <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDefaultValue:(id)arg1;

@end
