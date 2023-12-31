
@protocol PKPeerPaymentAccountResolutionControllerDelegate <NSObject>

@required

- (void)peerPaymentAccountResolutionController:(PKPeerPaymentAccountResolutionController *)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(PKPeerPaymentAccountResolutionController *)arg1 requestsPresentViewController:(UIViewController *)arg2 animated:(bool)arg3;

@end
