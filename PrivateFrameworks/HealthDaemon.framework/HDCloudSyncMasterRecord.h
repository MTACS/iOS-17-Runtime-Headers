
@interface HDCloudSyncMasterRecord : HDCloudSyncRecord {
    NSSet * _disabledOwnerIdentifiers;
}

@property (nonatomic, retain) NSSet *disabledOwnerIdentifiers;

+ (id)fieldsForUnprotectedSerialization;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isMasterRecord:(id)arg1;
+ (bool)isMasterRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordType;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)disabledOwnerIdentifiers;
- (id)initInSyncCircle:(id)arg1 disabledOwnerIdentifiers:(id)arg2;
- (id)initInZone:(id)arg1 disabledOwnerIdentifiers:(id)arg2;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)setDisabledOwnerIdentifiers:(id)arg1;

@end
