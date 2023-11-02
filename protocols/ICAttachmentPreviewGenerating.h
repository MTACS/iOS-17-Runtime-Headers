
@protocol ICAttachmentPreviewGenerating <NSObject>

@required

- (void)cancelIfNeededForAttachment:(ICAttachment *)arg1;
- (void)generatePreviewIfNeededForAttachment:(ICAttachment *)arg1;
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(NSManagedObjectID *)arg1;
- (void)generatePreviewsIfNeeded;

@end
