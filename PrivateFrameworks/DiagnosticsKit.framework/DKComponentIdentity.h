
@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domain;
    NSString * _identifier;
    NSSet * _resources;
    NSString * _type;
    DKCanonicalVersion * _version;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *resources;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) DKCanonicalVersion *version;

+ (id)componentIdentityWithDomain:(id)arg1 version:(id)arg2 resources:(id)arg3;
+ (id)componentIdentityWithType:(id)arg1 identifier:(id)arg2 version:(id)arg3 resources:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 version:(id)arg2 resources:(id)arg3;
- (id)initWithType:(id)arg1 identifier:(id)arg2 version:(id)arg3 resources:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponentIdentity:(id)arg1;
- (bool)isNewerThan:(id)arg1;
- (id)resources;
- (id)type;
- (id)version;

@end
