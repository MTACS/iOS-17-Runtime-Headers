
@interface HDCloudSyncAttachmentReferenceTombstoneRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentReferenceTombstones * _underlyingReferenceTombstones;
}

@property (nonatomic, readonly) long long attachmentReferenceTombstoneCount;
@property (nonatomic, readonly, copy) NSArray *attachmentReferenceTombstones;
@property (nonatomic, readonly, copy) NSString *ownerIdentifier;
@property (nonatomic, readonly) long long recordIndex;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isAttachmentReferenceTombstoneRecord:(id)arg1;
+ (bool)isAttachmentReferenceTombstoneRecordID:(id)arg1;
+ (id)recordIDForOwnerIdentifier:(id)arg1 recordIndex:(long long)arg2 zoneID:(id)arg3;
+ (id)recordType;
+ (bool)requiresUnderlyingMessage;
+ (bool)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (void)addAttachmentReferenceTombstone:(id)arg1;
- (long long)attachmentReferenceTombstoneCount;
- (id)attachmentReferenceTombstones;
- (id)description;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)initWithOwnerIdentifier:(id)arg1 recordIndex:(long long)arg2 zoneID:(id)arg3;
- (id)ownerIdentifier;
- (id)printDescription;
- (long long)recordIndex;
- (id)serializeUnderlyingMessage;

@end
