
@protocol SFAccountOtpauthQRCodeScannerViewControllerDelegate <NSObject>

@required

- (void)QRCodeScannerViewController:(SFAccountOtpauthQRCodeScannerViewController *)arg1 didScanQRCodeWithURLValue:(NSURL *)arg2;

@end
