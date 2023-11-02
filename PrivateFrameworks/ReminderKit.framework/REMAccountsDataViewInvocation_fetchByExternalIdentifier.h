
@interface REMAccountsDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {
    NSArray * _externalIdentifiers;
}

@property (nonatomic, readonly) NSArray *externalIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifiers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
