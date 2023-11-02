
@interface REMSmartListsDataViewInvocation_fetchCustomSmartListsInAccount : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _accountObjectID;
}

@property (nonatomic, readonly) REMObjectID *accountObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountObjectID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentAccountObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
