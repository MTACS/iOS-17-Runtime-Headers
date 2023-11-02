
@interface _COClusterRealmHome : COClusterRealm {
    NSUUID * _specificHomeUUID;
}

@property (nonatomic, readonly, copy) NSUUID *specificHomeUUID;

+ (id)realmForCurrent;
+ (id)realmWithHomeKitHomeIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifierForGroupResult:(id)arg1;
- (id)_initWithPredicate:(id)arg1 forHome:(id)arg2;
- (void)activate:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)specificHomeUUID;

@end
