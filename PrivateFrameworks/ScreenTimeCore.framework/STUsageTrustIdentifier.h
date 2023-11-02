
@interface STUsageTrustIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    bool  _usageTrusted;
}

@property (readonly, copy) NSString *identifier;
@property (readonly) bool usageTrusted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_stUsageTrustIdentifierCommonInitWithIdentifier:(id)arg1 usageTrusted:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 usageTrusted:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)usageTrusted;

@end
