
@interface DNDSSyncEngineMetadataStore : NSObject <DNDSSyncEngineMetadataStoring> {
    long long  _accountStatus;
    bool  _encryptionAvailable;
    NSData * _metadata;
    NSMutableDictionary * _systemFieldsByRecordID;
    NSURL * _url;
    NSString * _userRecordID;
    NSMutableSet * _zoneNames;
}

@property (nonatomic) long long accountStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncryptionAvailable, nonatomic) bool encryptionAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *metadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userRecordID;

- (void).cxx_destruct;
- (id)_decodeRecordIDFromData:(id)arg1;
- (id)_encodedRecordIDFromRecordID:(id)arg1;
- (id)_encodedSystemFieldsFromRecord:(id)arg1;
- (void)_read;
- (void)_removeSystemFieldsForRecordID:(id)arg1;
- (void)_updateSystemFieldsForRecord:(id)arg1;
- (void)_write;
- (long long)accountStatus;
- (void)addRecord:(id)arg1;
- (bool)addZoneName:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isEncryptionAvailable;
- (id)metadata;
- (void)purge;
- (id)recordIDsWithZoneID:(id)arg1;
- (id)recordWithID:(id)arg1;
- (void)removeRecordWithID:(id)arg1;
- (void)removeRecordsWithZoneID:(id)arg1;
- (bool)removeZoneName:(id)arg1;
- (void)setAccountStatus:(long long)arg1;
- (void)setEncryptionAvailable:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;
- (id)zoneNames;

@end
