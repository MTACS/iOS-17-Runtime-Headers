
@interface _UIStatusBarDataIntegerEntry : _UIStatusBarDataEntry {
    bool  _displayRawValue;
    long long  _displayValue;
    long long  _rawValue;
}

@property (nonatomic) bool displayRawValue;
@property (nonatomic) long long displayValue;
@property (nonatomic) long long rawValue;

+ (bool)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displayRawValue;
- (long long)displayValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)rawValue;
- (void)setDisplayRawValue:(bool)arg1;
- (void)setDisplayValue:(long long)arg1;
- (void)setRawValue:(long long)arg1;

@end
