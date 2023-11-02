
@interface NEFilterRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long  _action;
    NENetworkRule * _networkRule;
}

@property (readonly) long long action;
@property (readonly, copy) NENetworkRule *networkRule;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkRule:(id)arg1 action:(long long)arg2;
- (id)networkRule;

@end
