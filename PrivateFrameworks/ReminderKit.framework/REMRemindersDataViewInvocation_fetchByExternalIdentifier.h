
@interface REMRemindersDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {
    NSArray * _externalIdentifiers;
    REMObjectID * _listObjectID;
}

@property (nonatomic, readonly) NSArray *externalIdentifiers;
@property (nonatomic, readonly) REMObjectID *listObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifiers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1 listObjectID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)listObjectID;

@end
