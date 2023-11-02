
@interface HDCloudSyncSharedSummaryTransactionRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryTransactionRecord * _underlyingTransactionRecord;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSData *metadata;
@property (nonatomic, readonly, copy) NSString *sourceDeviceIdentifier;
@property (nonatomic, readonly, copy) NSArray *summaryIdentifiers;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isTransactionRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 UUID:(id)arg2;
+ (id)recordType;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (id)initInZone:(id)arg1 UUID:(id)arg2 sourceDeviceIdentifier:(id)arg3 summaryIdentifiers:(id)arg4 metadata:(id)arg5;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)metadata;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (id)sourceDeviceIdentifier;
- (id)summaryIdentifiers;

@end
