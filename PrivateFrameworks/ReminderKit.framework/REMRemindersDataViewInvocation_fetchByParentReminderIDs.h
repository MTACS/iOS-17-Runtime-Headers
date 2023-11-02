
@interface REMRemindersDataViewInvocation_fetchByParentReminderIDs : REMStoreInvocation <NSSecureCoding> {
    NSArray * _parentReminderIDs;
}

@property (nonatomic, readonly) NSArray *parentReminderIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parentReminderIDs;

@end
