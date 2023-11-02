
@protocol AKSignatureCreationControllerDelegate <NSObject>

@required

- (void)signatureCreationControllerDidCreateSignature:(AKSignatureCreationViewController_iOS *)arg1;

@optional

- (void)signatureCreationControllerDidDismiss:(AKSignatureCreationViewController_iOS *)arg1;

@end
