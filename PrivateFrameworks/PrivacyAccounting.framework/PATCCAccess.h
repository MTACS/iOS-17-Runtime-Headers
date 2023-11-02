
@interface PATCCAccess : PAAccess {
    NSString * _tccService;
}

@property (nonatomic, readonly) NSString *tccService;

+ (id)accessWithAccessor:(id)arg1 forService:(id)arg2;
+ (id)accessWithAuditToken:(struct { unsigned int x1[8]; })arg1 forService:(id)arg2;
+ (id)accessWithAuthorization:(id)arg1;
+ (id)accessWithInsecureProcessIdentifier:(int)arg1 forService:(id)arg2;
+ (id)eventStreamIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForCategory;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hashWithOptions:(unsigned long long)arg1;
- (id)initWithAccessor:(id)arg1 forService:(id)arg2;
- (id)initWithAccessor:(id)arg1 forService:(id)arg2 assetIdentifiers:(id)arg3;
- (id)initWithAccessor:(id)arg1 identifier:(id)arg2 kind:(long long)arg3 forService:(id)arg4;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 forService:(id)arg2;
- (id)initWithAuthorization:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInsecureProcessIdentifier:(int)arg1 forService:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqualToAccess:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)proto;
- (id)tccService;

@end
