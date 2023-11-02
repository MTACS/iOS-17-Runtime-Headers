
@interface LNRequiredCapabilityMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domain;
    NSString * _key;
    bool  _value;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *key;
@property (getter=isMobileGestaltCapability, nonatomic, readonly) bool mobileGestaltCapability;
@property (nonatomic, readonly) bool value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 key:(id)arg2 value:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMobileGestaltCapability;
- (id)key;
- (bool)value;

@end
