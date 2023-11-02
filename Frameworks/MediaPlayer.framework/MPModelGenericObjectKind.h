
@interface MPModelGenericObjectKind : MPModelKind {
    NSDictionary * _relationshipKinds;
}

@property (nonatomic, readonly) NSDictionary *relationshipKinds;

+ (id)identityKind;
+ (id)kindWithRelationshipKinds:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)relationshipKinds;

@end
