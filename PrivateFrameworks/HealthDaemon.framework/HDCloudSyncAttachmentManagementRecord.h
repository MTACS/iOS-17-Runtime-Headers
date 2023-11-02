
@interface HDCloudSyncAttachmentManagementRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentManagementRecord * _underlyingAttachmentManagementRecord;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isAttachmentManagementRecord:(id)arg1;
+ (bool)isAttachmentManagementRecordID:(id)arg1;
+ (id)recordIDForZoneID:(id)arg1;
+ (id)recordType;
+ (bool)requiresUnderlyingMessage;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (id)initInZoneID:(id)arg1;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
