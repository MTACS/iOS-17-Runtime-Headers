
@interface HDCloudSyncAttachmentRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachment * _underlyingAttachment;
}

@property (nonatomic, readonly, copy) NSData *assetData;
@property (nonatomic, readonly, copy) NSURL *assetURL;
@property (nonatomic, readonly, copy) HDAttachment *attachment;
@property (nonatomic, readonly, copy) NSString *attachmentIdentifier;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) bool hasAssetData;

+ (id)attachmentIdentifierForRecordID:(id)arg1;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isAttachmentRecord:(id)arg1;
+ (bool)isAttachmentRecordID:(id)arg1;
+ (id)recordIDForAttachmentIdentifier:(id)arg1 zoneID:(id)arg2;
+ (id)recordType;
+ (id)recordWithAttachment:(id)arg1 fileHandle:(id)arg2 zoneID:(id)arg3 error:(id*)arg4;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)assetData;
- (id)assetURL;
- (id)attachment;
- (id)attachmentIdentifier;
- (id)description;
- (long long)fileSize;
- (bool)hasAssetData;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)unitTest_setFileURL:(id)arg1;

@end
