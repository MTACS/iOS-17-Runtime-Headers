
@protocol AKSignaturesViewControllerDelegate <NSObject>

@required

- (void)signaturesViewControllerContinueToCreateSignature:(AKSignaturesViewController_iOS *)arg1;
- (void)signaturesViewControllerDidCancel:(AKSignaturesViewController_iOS *)arg1;
- (void)signaturesViewControllerDidSelectSignature:(AKSignaturesViewController_iOS *)arg1;

@end
