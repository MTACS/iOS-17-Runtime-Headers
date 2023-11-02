
@interface REMSmartListsDataViewInvocation_fetchCustomSmartListsInGroup : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _groupObjectID;
}

@property (nonatomic, readonly) REMObjectID *groupObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupObjectID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentGroupObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
