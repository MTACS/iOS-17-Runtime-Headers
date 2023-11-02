
@interface HDCloudSyncSharedSummaryParticipantRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryParticipantRecord * _underlyingSummaryParticipantRecord;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, copy) NSArray *allContactIdentifiers;
@property (nonatomic, readonly, copy) NSUUID *authorizationRecordIdentifier;
@property (nonatomic, copy) NSString *cloudKitIdentifier;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSDate *entryAcceptanceDate;
@property (nonatomic, copy) NSDate *entryInvitationDate;
@property (nonatomic, copy) NSDate *entryModificationDate;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSUUID *invitationUUID;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSNumber *notificationStatus;
@property (nonatomic, copy) CKShareParticipant *ownerParticipant;
@property (nonatomic, copy) NSNumber *relationshipDirection;
@property (nonatomic, copy) NSNumber *relationshipStatus;
@property (nonatomic, copy) NSNumber *relationshipType;
@property (nonatomic, copy) HDCodableSharingSetupMetadata *shareSetupMetadata;
@property (nonatomic, copy) NSNumber *userWheelchairMode;

+ (id)codableRecordFromRecord:(id)arg1;
+ (id)fieldsForUnprotectedSerialization;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isParticipantRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 UUID:(id)arg2;
+ (id)recordType;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)UUID;
- (id)allContactIdentifiers;
- (id)authorizationRecordIdentifier;
- (id)cloudKitIdentifier;
- (id)contactIdentifier;
- (id)description;
- (id)entryAcceptanceDate;
- (id)entryInvitationDate;
- (id)entryModificationDate;
- (id)firstName;
- (id)initInZone:(id)arg1 codableEntry:(id)arg2;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)invitationUUID;
- (id)lastName;
- (long long)mergeWithLocalEntry:(id)arg1 error:(id*)arg2;
- (id)notificationStatus;
- (id)ownerParticipant;
- (id)printDescription;
- (id)relationshipDirection;
- (id)relationshipStatus;
- (id)relationshipType;
- (id)serializeUnderlyingMessage;
- (void)setAllContactIdentifiers:(id)arg1;
- (void)setAuthorizationRecord:(id)arg1;
- (void)setCloudKitIdentifier:(id)arg1;
- (void)setEntryAcceptanceDate:(id)arg1;
- (void)setEntryInvitationDate:(id)arg1;
- (void)setEntryModificationDate:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setInvitationUUID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setNotificationStatus:(id)arg1;
- (void)setOwnerParticipant:(id)arg1;
- (void)setRelationshipDirection:(id)arg1;
- (void)setRelationshipStatus:(id)arg1;
- (void)setRelationshipType:(id)arg1;
- (void)setShareSetupMetadata:(id)arg1;
- (void)setUserWheelchairMode:(id)arg1;
- (id)shareSetupMetadata;
- (bool)updateWithLocalEntry:(id)arg1 error:(id*)arg2;
- (id)userWheelchairMode;

@end
