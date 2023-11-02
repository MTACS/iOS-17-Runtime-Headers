
@protocol EKEventAttachmentEditViewControllerDelegate <NSObject>

@optional

- (void)attachmentEditViewController:(EKEventAttachmentEditViewController *)arg1 attachmentDidChange:(long long)arg2;
- (EKEvent *)owningEventForAttachmentEditViewController:(EKEventAttachmentEditViewController *)arg1;

@end
