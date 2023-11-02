
@protocol PKPeerPaymentThresholdTopUpControllerDelegate <NSObject>

@required

- (NSString *)presentationSceneIdentifierForTopUpController:(PKPeerPaymentThresholdTopUpController *)arg1;
- (void)thresholdTopUpController:(PKPeerPaymentThresholdTopUpController *)arg1 requestsDismissViewController:(UIViewController *)arg2;
- (void)thresholdTopUpController:(PKPeerPaymentThresholdTopUpController *)arg1 requestsPresentViewController:(UIViewController *)arg2;
- (void)thresholdTopUpController:(PKPeerPaymentThresholdTopUpController *)arg1 requestsPushViewController:(UIViewController *)arg2;
- (void)thresholdTopUpControllerCompletedSetup:(PKPeerPaymentThresholdTopUpController *)arg1;

@optional

- (void)thresholdTopUpController:(PKPeerPaymentThresholdTopUpController *)arg1 requestsPopViewController:(UIViewController *)arg2;

@end
