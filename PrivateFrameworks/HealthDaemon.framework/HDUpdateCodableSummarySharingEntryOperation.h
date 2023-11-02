
@interface HDUpdateCodableSummarySharingEntryOperation : HDJournalableOperation {
    NSDate * _dateAccepted;
    NSDate * _dateModified;
    NSUUID * _invitationUUID;
    CKShareParticipant * _ownerParticipant;
    HKSummarySharingEntry * _sharingEntry;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSDate *dateAccepted;
@property (nonatomic, readonly, copy) NSDate *dateModified;
@property (nonatomic, readonly, copy) NSUUID *invitationUUID;
@property (nonatomic, readonly, copy) CKShareParticipant *ownerParticipant;
@property (nonatomic, readonly) HKSummarySharingEntry *sharingEntry;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateAccepted;
- (id)dateModified;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationUUID:(id)arg1 status:(long long)arg2 dateModified:(id)arg3 dateAccepted:(id)arg4 ownerParticipant:(id)arg5;
- (id)invitationUUID;
- (id)ownerParticipant;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)sharingEntry;
- (long long)status;

@end
