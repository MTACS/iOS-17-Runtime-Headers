
@protocol CKSendMenuPopoverPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@required

- (void)sendMenuPresentationController:(CKSendMenuPopoverPresentationController *)arg1 didChangePopoverLayoutMetrics:(CKPopoverViewLayoutMetrics *)arg2;
- (void)sendMenuPresentationControllerWantsToBeDismissed:(CKSendMenuPopoverPresentationController *)arg1;
- (void)sendMenuPresentationControllerWillDismiss:(CKSendMenuPopoverPresentationController *)arg1;

@end
