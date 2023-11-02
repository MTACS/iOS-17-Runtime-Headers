
@interface PSDisplay : NSObject <NSCopying, NSSecureCoding> {
    bool  _builtin;
    NSString * _hardwareIdentifier;
}

+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithHardwareIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
