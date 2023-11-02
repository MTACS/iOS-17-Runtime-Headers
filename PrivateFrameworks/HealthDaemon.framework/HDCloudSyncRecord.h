
@interface HDCloudSyncRecord : NSObject {
    CKRecord * _record;
    bool  _repaired;
    bool  _unsaved;
}

@property (nonatomic, readonly) CKRecord *record;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic) bool repaired;
@property (nonatomic, readonly) long long schemaVersion;
@property (nonatomic, readonly, copy) NSData *underlyingMessage;
@property (nonatomic, readonly) bool unsaved;

+ (id)fieldsForProtectedSerialization;
+ (id)fieldsForUnprotectedSerialization;
+ (bool)hasFutureSchema:(id)arg1;
+ (id)initWithSerializedRecord:(id)arg1 error:(id*)arg2;
+ (id)recordType;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;
+ (bool)requiresEncryptedSchemaVersion;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)printDescription;
- (id)record;
- (id)recordID;
- (bool)repaired;
- (long long)schemaVersion;
- (id)serialize;
- (id)serializeUnderlyingMessage;
- (void)setRepaired:(bool)arg1;
- (id)underlyingMessage;
- (bool)unsaved;
- (bool)validateWithError:(id*)arg1;

@end
