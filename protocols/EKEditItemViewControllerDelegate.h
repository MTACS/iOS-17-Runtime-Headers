
@protocol EKEditItemViewControllerDelegate <NSObject>

@required

- (EKEvent *)editItemEventToDetach;
- (void)editItemViewController:(EKEditItemViewController *)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerShouldShowDetachAlert;

@optional

- (void)editItemPendingVideoConferenceCompleted:(EKEditItemViewController *)arg1;
- (bool)editItemViewControllerSave:(id <EKEditItemViewControllerProtocol>)arg1;
- (void)editItemViewControllerWantsKeyboardPinned:(bool)arg1;

@end
