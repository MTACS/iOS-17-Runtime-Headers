
@interface HDCloudSyncDeviceKeyValueRecord : HDCloudSyncRecord {
    HDCloudSyncCodableDeviceKeyValue * _underlyingDeviceKeyValue;
}

@property (nonatomic, copy) HDCloudSyncCodableDeviceKeyValue *underlyingDeviceKeyValue;

+ (id)fieldsForUnprotectedSerialization;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isDeviceKeyValueRecord:(id)arg1;
+ (bool)isDeviceKeyValueRecordID:(id)arg1;
+ (id)recordType;
+ (bool)requiresEncryptedSchemaVersion;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)codableDeviceKeyValueEntry;
- (id)description;
- (id)deviceContextRecordID;
- (id)deviceKeyValueEntry:(id*)arg1;
- (id)initInZone:(id)arg1 deviceKeyValueEntry:(id)arg2 deviceContextRecord:(id)arg3 UUID:(id)arg4;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)setUnderlyingDeviceKeyValue:(id)arg1;
- (id)syncIdentity;
- (id)underlyingDeviceKeyValue;
- (void)updateDeviceKeyValueEntry:(id)arg1;

@end
