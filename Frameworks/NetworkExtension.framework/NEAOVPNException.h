
@interface NEAOVPNException : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long  _action;
    NSString * _bundleIdentifier;
    NSArray * _limitToProtocols;
    NSString * _serviceName;
}

@property long long action;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSArray *limitToProtocols;
@property (copy) NSString *serviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)bundleIdentifier;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isLimitedToUDP;
- (id)limitToProtocols;
- (id)serviceName;
- (void)setAction:(long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLimitToProtocols:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
