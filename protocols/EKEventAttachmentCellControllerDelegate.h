
@protocol EKEventAttachmentCellControllerDelegate <NSObject>

@required

- (EKEvent *)owningEventForAttachmentCellController:(EKEventAttachmentCellController *)arg1;
- (UIViewController *)parentViewControllerForAttachmentCellController:(EKEventAttachmentCellController *)arg1;

@end
