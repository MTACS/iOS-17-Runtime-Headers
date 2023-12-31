
@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider

+ (id)fullResolutionAttachmentForAttachment:(id)arg1;
+ (id)fullResolutionAttachmentURLForAttachmentURL:(id)arg1;
+ (id)fullResolutionStorageLocationForAttachmentWithMimePart:(id)arg1 withMessage:(id)arg2;

- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
