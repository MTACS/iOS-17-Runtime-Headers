
@interface HPBooleanSettingValue : HPSettingValue <NSSecureCoding> {
    bool  _booleanValue;
}

@property (nonatomic, readonly) bool booleanValue;

+ (bool)supportsSecureCoding;

- (bool)booleanValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 boolValue:(bool)arg2;
- (bool)isEqual:(id)arg1;

@end
