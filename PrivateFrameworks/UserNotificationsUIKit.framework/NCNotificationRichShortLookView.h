
@interface NCNotificationRichShortLookView : NCNotificationShortLookView

@property (getter=isAttachmentImageFeatured, nonatomic) bool attachmentImageFeatured;

- (void)_layoutNotificationContentView;
- (id)_newNotificationContentView;
- (id)_richContentView;
- (bool)isAttachmentImageFeatured;
- (void)setAttachmentImageFeatured:(bool)arg1;

@end
