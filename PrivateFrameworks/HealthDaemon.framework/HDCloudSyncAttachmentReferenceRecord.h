
@interface HDCloudSyncAttachmentReferenceRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentReference * _underlyingReference;
}

@property (nonatomic, readonly, copy) NSString *attachmentIdentifier;
@property (nonatomic, readonly, copy) HDAttachmentReference *attachmentReference;
@property (nonatomic, readonly, copy) NSString *referenceIdentifier;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isAttachmentReferenceRecord:(id)arg1;
+ (bool)isAttachmentReferenceRecordID:(id)arg1;
+ (id)recordIDForReferenceIdentifier:(id)arg1 zoneID:(id)arg2;
+ (id)recordType;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)attachmentIdentifier;
- (id)attachmentReference;
- (id)description;
- (id)initWithAttachmentReference:(id)arg1 zoneID:(id)arg2;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)printDescription;
- (id)referenceIdentifier;
- (id)serializeUnderlyingMessage;

@end
