
@interface REMRemindersDataViewInvocation_fetchByParentReminderID : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _accountID;
    bool  _includeUnsupported;
    REMObjectID * _parentReminderID;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) bool includeUnsupported;
@property (nonatomic, readonly) REMObjectID *parentReminderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includeUnsupported;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderID:(id)arg1 accountID:(id)arg2 includeUnsupported:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)parentReminderID;

@end
