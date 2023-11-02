
@interface NEFilterSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long  _defaultAction;
    NSArray * _rules;
}

@property (readonly) long long defaultAction;
@property (readonly, copy) NSArray *rules;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)defaultAction;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRules:(id)arg1 defaultAction:(long long)arg2;
- (id)rules;

@end
