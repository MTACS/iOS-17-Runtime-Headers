
@protocol PKPeerPaymentActionControllerDelegate <NSObject>

@required

- (void)peerPaymentActionController:(PKPeerPaymentActionController *)arg1 hasChangedState:(unsigned long long)arg2;
- (void)peerPaymentActionController:(PKPeerPaymentActionController *)arg1 requestPresentViewController:(UIViewController *)arg2;
- (NSString *)presentationSceneBundleIdentifierForPeerPaymentActionController:(PKPeerPaymentActionController *)arg1;
- (NSString *)presentationSceneIdentifierForPeerPaymentActionController:(PKPeerPaymentActionController *)arg1;

@end
