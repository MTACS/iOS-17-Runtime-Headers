
@interface HDCloudSyncStateRecord : HDCloudSyncRecord {
    HDCloudSyncCodableState * _underlyingStateData;
}

@property (nonatomic, readonly) bool hasStateData;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, copy) NSData *stateData;
@property (nonatomic, readonly, copy) NSURL *stateDataAssetURL;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isStateRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 recordIdentifier:(id)arg2;
+ (id)recordType;
+ (id)recordWithStateData:(id)arg1 zoneID:(id)arg2 recordIdentifier:(id)arg3 error:(id*)arg4;
+ (bool)requiresEncryptedSchemaVersion;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)_createAssetWithStateData:(id)arg1 error:(id*)arg2;
- (id)_initWithStateData:(id)arg1 zoneID:(id)arg2 recordIdentifier:(id)arg3 error:(id*)arg4;
- (bool)hasStateData;
- (id)initInZone:(id)arg1 recordIdentifier:(id)arg2;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)key;
- (id)serializeUnderlyingMessage;
- (void)setStateData:(id)arg1;
- (id)stateData;
- (id)stateDataAssetURL;
- (void)updateStateData:(id)arg1;

@end
