
@interface EDAttachmentPersistenceManager : NSObject <EDMessageChangeHookResponder, EFLoggable> {
    EDAttachmentPersistence * _attachmentPersistence;
    EDMessagePersistence * _messagePersistence;
    NSURL * _tempDirectoryForArchiveAttachments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)attachmentDirectoryURLWithBasePath:(id)arg1;
+ (id)createFilenameForAttachmentName:(id)arg1;
+ (id)log;
+ (void)removeSynapseAttachmentAttributesForMessages:(id)arg1;

- (void).cxx_destruct;
- (id)allAttachmentsInfoForGlobalMessageIDs:(id)arg1 basePath:(id)arg2;
- (id)attachmentDirectoryURLForMessageID:(long long)arg1 basePath:(id)arg2;
- (id)attachmentURLForGlobalMessageID:(long long)arg1 mimePartNumber:(id)arg2 basePath:(id)arg3;
- (id)attachmentURLForGlobalMessageID:(long long)arg1 remoteURL:(id)arg2 basePath:(id)arg3;
- (id)attachmentURLForMessageAttachmentID:(long long)arg1 basePath:(id)arg2;
- (id)createAttachmentFileWriterForAttachmentMetadata:(id)arg1 basePath:(id)arg2 downloadDate:(id)arg3 queue:(id)arg4 compressionQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)initWithDatabase:(id)arg1 messagePersistence:(id)arg2;
- (void)insertMimePartAttachments:(id)arg1 forGlobalMessageID:(long long)arg2;
- (void)isDeletingMessages:(id)arg1;
- (bool)persistAttachment:(id)arg1 attachmentMetadata:(id)arg2 basePath:(id)arg3 error:(id*)arg4;
- (bool)persistAttachmentMetadata:(id)arg1;
- (bool)persistAttachmentWithURL:(id)arg1 attachmentMetadata:(id)arg2 basePath:(id)arg3 error:(id*)arg4;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceWillDeleteMessages:(id)arg1;
- (void)willDeleteAttachmentsForMessages:(id)arg1;

@end
