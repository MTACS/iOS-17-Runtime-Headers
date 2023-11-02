
@interface HPStringSettingValue : HPSettingValue <NSSecureCoding> {
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *stringValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 settingStringValue:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)stringValue;

@end
