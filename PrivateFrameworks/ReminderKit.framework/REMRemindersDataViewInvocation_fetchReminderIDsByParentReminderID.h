
@interface REMRemindersDataViewInvocation_fetchReminderIDsByParentReminderID : REMStoreInvocation <NSSecureCoding> {
    bool  _includeCompleted;
    bool  _includeIncomplete;
    bool  _isUnsupported;
    REMObjectID * _parentReminderID;
}

@property (nonatomic, readonly) bool includeCompleted;
@property (nonatomic, readonly) bool includeIncomplete;
@property (nonatomic, readonly) bool isUnsupported;
@property (nonatomic, readonly) REMObjectID *parentReminderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includeCompleted;
- (bool)includeIncomplete;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderID:(id)arg1 includeIncomplete:(bool)arg2 includeCompleted:(bool)arg3 isUnsupported:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isUnsupported;
- (id)parentReminderID;

@end
