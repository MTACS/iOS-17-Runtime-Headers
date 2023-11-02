
@interface DKComponent : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attributes;
    DKComponentIdentity * _identity;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) DKComponentIdentity *identity;

+ (id)componentWithIdentity:(id)arg1 attributes:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryForJSON;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 attributes:(id)arg2;

@end
