
@interface REMListsDataViewInvocation_dataAccessFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _accountObjectID;
    NSArray * _externalIdentifiers;
}

@property (nonatomic, readonly) REMObjectID *accountObjectID;
@property (nonatomic, readonly) NSArray *externalIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountObjectID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifiers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1 accountObjectID:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
