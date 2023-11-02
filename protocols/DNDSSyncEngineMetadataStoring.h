
@protocol DNDSSyncEngineMetadataStoring <NSObject>

@required

- (long long)accountStatus;
- (void)addRecord:(CKRecord *)arg1;
- (bool)addZoneName:(NSString *)arg1;
- (bool)isEncryptionAvailable;
- (NSData *)metadata;
- (void)purge;
- (NSArray *)recordIDsWithZoneID:(CKRecordZoneID *)arg1;
- (CKRecord *)recordWithID:(CKRecordID *)arg1;
- (void)removeRecordWithID:(CKRecordID *)arg1;
- (void)removeRecordsWithZoneID:(CKRecordZoneID *)arg1;
- (bool)removeZoneName:(NSString *)arg1;
- (void)setAccountStatus:(long long)arg1;
- (void)setEncryptionAvailable:(bool)arg1;
- (void)setMetadata:(NSData *)arg1;
- (void)setUserRecordID:(NSString *)arg1;
- (NSString *)userRecordID;
- (NSSet *)zoneNames;

@end
