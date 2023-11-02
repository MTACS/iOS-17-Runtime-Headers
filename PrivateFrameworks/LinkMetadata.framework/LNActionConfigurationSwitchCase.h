
@interface LNActionConfigurationSwitchCase : NSObject <NSCopying, NSSecureCoding> {
    LNActionConfiguration * _configuration;
    bool  _defaultCase;
    LNValue * _value;
}

@property (nonatomic, readonly, copy) LNActionConfiguration *configuration;
@property (getter=isDefaultCase, nonatomic, readonly) bool defaultCase;
@property (nonatomic, readonly) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultConfiguration:(id)arg1;
- (id)initWithValue:(id)arg1 configuration:(id)arg2;
- (id)initWithWidgetFamilies:(id)arg1 configuration:(id)arg2;
- (id)initWithWidgetFamily:(id)arg1 configuration:(id)arg2;
- (bool)isDefaultCase;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
