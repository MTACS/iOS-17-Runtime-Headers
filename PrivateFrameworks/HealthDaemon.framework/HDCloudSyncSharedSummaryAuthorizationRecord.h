
@interface HDCloudSyncSharedSummaryAuthorizationRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryAuthorizationRecord * _underlyingAuthorizationRecord;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *authorizationIdentifiers;
@property (nonatomic, readonly, copy) CKRecordID *participantRecordID;

+ (id)codableRecordFromRecord:(id)arg1;
+ (id)fieldsForUnprotectedSerialization;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isAuthorizationRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 UUID:(id)arg2;
+ (id)recordType;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)UUID;
- (id)authorizationIdentifiers;
- (id)description;
- (id)initInZone:(id)arg1 UUID:(id)arg2 authorizationIdentifiers:(id)arg3 participantRecord:(id)arg4;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)participantRecordID;
- (id)printDescription;
- (void)replaceAuthorizationIdentifiers:(id)arg1;
- (id)serializeUnderlyingMessage;
- (void)updateAuthorizationWithIdentifiersToAdd:(id)arg1 identifiersToDelete:(id)arg2;

@end
