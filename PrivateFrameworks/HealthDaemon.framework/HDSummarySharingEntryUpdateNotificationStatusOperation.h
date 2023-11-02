
@interface HDSummarySharingEntryUpdateNotificationStatusOperation : HDJournalableOperation {
    NSDate * _dateModified;
    NSUUID * _invitationUUID;
    long long  _notificationStatus;
    HKSummarySharingEntry * _sharingEntry;
}

@property (nonatomic, readonly, copy) NSDate *dateModified;
@property (nonatomic, readonly, copy) NSUUID *invitationUUID;
@property (nonatomic, readonly) long long notificationStatus;
@property (nonatomic, readonly) HKSummarySharingEntry *sharingEntry;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateModified;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationUUID:(id)arg1 notificationStatus:(long long)arg2 dateModified:(id)arg3;
- (id)invitationUUID;
- (long long)notificationStatus;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)sharingEntry;

@end
