
@interface LNDynamicOptionsProviderReference : NSObject <NSCopying, NSSecureCoding> {
    NSString * _parameterIdentifier;
}

@property (nonatomic, readonly, copy) NSString *parameterIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parameterIdentifier;

@end
