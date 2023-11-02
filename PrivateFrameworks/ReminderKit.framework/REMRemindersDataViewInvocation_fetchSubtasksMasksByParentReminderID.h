
@interface REMRemindersDataViewInvocation_fetchSubtasksMasksByParentReminderID : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _parentReminderID;
}

@property (nonatomic, readonly) REMObjectID *parentReminderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parentReminderID;

@end
