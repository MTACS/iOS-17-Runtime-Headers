
@protocol ICAttachmentPresentationDelegate <NSObject>

@required

- (ICAttachment *)attachment;
- (bool)isAttachmentEditable;
- (UIView *)viewToPresentAttachmentFrom;

@optional

- (void)attachmentViewControllerDidDismiss:(UIViewController *)arg1;

@end
