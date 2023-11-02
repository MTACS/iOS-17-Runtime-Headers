
@interface REMTipKitDataViewInvocation_fetchCompletedRemindersCountInList : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _listID;
}

@property (nonatomic, readonly) REMObjectID *listID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithListID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)listID;

@end
