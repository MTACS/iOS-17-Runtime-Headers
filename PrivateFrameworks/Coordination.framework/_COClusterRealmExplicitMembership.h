
@interface _COClusterRealmExplicitMembership : COClusterRealm {
    NSString * _clusterIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clusterIdentifier;

+ (id)realmWithClusterIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifierForGroupResult:(id)arg1;
- (id)_initWithClusterIdentifier:(id)arg1;
- (void)activate:(id /* block */)arg1;
- (id)clusterIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
