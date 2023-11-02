
@protocol ICGalleryAttachmentEditorControllerDelegate <NSObject>

@required

- (void)galleryAttachmentEditorControllerDeleteAttachment;
- (void)galleryAttachmentEditorControllerDidDismiss;
- (ICViewControllerManager *)ic_viewControllerManager;

@optional

- (void)galleryAttachmentEditorControllerWillShow;

@end
