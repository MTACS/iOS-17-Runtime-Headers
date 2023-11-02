
@interface EDAttachmentPersistence : NSObject <EFLoggable> {
    EDPersistenceDatabase * _database;
}

@property (nonatomic, retain) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)attachmentColumnNameHash;
+ (id)attachmentIDColumnNameInMessageAttachmentsTable;
+ (id)attachmentTableSchema;
+ (id)attachmentsTableName;
+ (id)globalMessageIDColumnNameInMessageAttachmentTable;
+ (id)hashForAttachmentData:(id)arg1;
+ (id)hashForAttachmentName:(id)arg1;
+ (id)log;
+ (id)messageAttachmentTableSchema;
+ (id)messageAttachmentsTableName;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (id)attachmentMetadataForMessage:(long long)arg1 mimePartNumber:(id)arg2;
- (id)attachmentMetadataForMessage:(long long)arg1 remoteURL:(id)arg2;
- (id)attachmentMetadataForMessageAttachmentID:(long long)arg1;
- (id)attachmentsForGlobalMessageIDs:(id)arg1;
- (id)database;
- (void)enumerateAttachmentsInfoForGlobalMessageIDs:(id)arg1 withBlock:(id /* block */)arg2;
- (id)globalMessageIDsForAttachment:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (long long)insertAttachmentMetadata:(id)arg1;
- (bool)insertMessageAttachmentMetadata:(id)arg1;
- (void)insertMimePartAttachments:(id)arg1 forGlobalMessageID:(long long)arg2;
- (bool)messageAttachmentExistsForGlobalMessageID:(long long)arg1 mimePartNumber:(id)arg2 hasAttachmentEntry:(bool*)arg3;
- (bool)messageAttachmentExistsForGlobalMessageID:(long long)arg1 remoteURL:(id)arg2 hasAttachmentEntry:(bool*)arg3;
- (id)messageAttachmentMetadataForMessageID:(long long)arg1;
- (bool)removeAttachments:(id)arg1;
- (void)setDatabase:(id)arg1;
- (id)uniqueAttachmentDataForHash:(id)arg1;
- (bool)updateAttachmentIDForMessageAttachment:(id)arg1;

@end
