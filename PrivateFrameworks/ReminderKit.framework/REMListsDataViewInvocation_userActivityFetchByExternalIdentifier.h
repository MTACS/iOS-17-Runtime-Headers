
@interface REMListsDataViewInvocation_userActivityFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _accountObjectID;
    NSString * _externalIdentifier;
}

@property (nonatomic, readonly) REMObjectID *accountObjectID;
@property (nonatomic, readonly) NSString *externalIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountObjectID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1 accountObjectID:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
