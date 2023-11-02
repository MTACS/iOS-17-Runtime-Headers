
@protocol FBKAttachmentListenerDelegate <NSObject>

@required

- (void)attachmentProvider:(id <FBKAttachmentProvider>)arg1 didAddAttachment:(FBKAttachment *)arg2;
- (void)attachmentProvider:(id <FBKAttachmentProvider>)arg1 didFinishAttaching:(FBKAttachment *)arg2 error:(NSError *)arg3;
- (void)attachmentProvider:(id <FBKAttachmentProvider>)arg1 didFinishLoadingWithAttachments:(NSSet *)arg2 error:(NSError *)arg3;
- (void)attachmentProvider:(id <FBKAttachmentProvider>)arg1 didRemoveAttachment:(FBKAttachment *)arg2;
- (void)attachmentProvider:(id <FBKAttachmentProvider>)arg1 didStartAttaching:(FBKAttachment *)arg2;
- (void)attachmentProvider:(id <FBKAttachmentProvider>)arg1 didTakeAttachment:(FBKAttachment *)arg2 fromOtherProvider:(id <FBKAttachmentProvider>)arg3;
- (void)attachmentProvider:(id <FBKAttachmentProvider>)arg1 didUpdateAttachment:(FBKAttachment *)arg2;
- (NSSet *)popPendingRequirements;

@end
