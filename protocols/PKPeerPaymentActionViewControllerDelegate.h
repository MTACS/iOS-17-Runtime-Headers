
@protocol PKPeerPaymentActionViewControllerDelegate <NSObject>

@required

- (void)peerPaymentActionViewControllerDidCancel:(PKPeerPaymentActionViewController *)arg1;
- (void)peerPaymentActionViewControllerDidPerformAction:(PKPeerPaymentActionViewController *)arg1;

@end
