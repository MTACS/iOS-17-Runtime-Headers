
@protocol PXPhotoRecipientViewControllerDelegate <NSObject>

@required

- (void)photoRecipientViewController:(PXPhotoRecipientViewController *)arg1 didCompleteWithRecipients:(NSArray *)arg2;
- (void)photoRecipientViewControllerDidCancel:(PXPhotoRecipientViewController *)arg1;

@end
