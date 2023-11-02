
@interface HDCloudSyncDeviceContextRecord : HDCloudSyncRecord {
    HDCloudSyncCodableDeviceContext * _underlyingDeviceContext;
}

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isDeviceContextRecord:(id)arg1;
+ (bool)isDeviceContextRecordID:(id)arg1;
+ (id)recordType;
+ (bool)requiresEncryptedSchemaVersion;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)codableDeviceContext;
- (id)description;
- (id)deviceContext:(id*)arg1;
- (id)deviceContextWithError:(id*)arg1;
- (id)initInZone:(id)arg1 deviceContext:(id)arg2 UUID:(id)arg3;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)updateDeviceContextWithContext:(id)arg1;

@end
