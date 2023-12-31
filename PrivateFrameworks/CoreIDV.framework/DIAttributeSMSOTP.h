
@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding> {
    unsigned long long  _validityInSeconds;
}

@property (nonatomic) unsigned long long validityInSeconds;

+ (bool)supportsSecureCoding;

- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCurrentValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setValidityInSeconds:(unsigned long long)arg1;
- (id)submissionString;
- (unsigned long long)validityInSeconds;

@end
