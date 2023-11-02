
@protocol CDPUIInheritanceAccessCodeScannerViewDelegate

@required

- (void)accessCodeScanner:(CDPUIInheritanceAccessCodeScannerView *)arg1 didFailToStarCapture:(NSError *)arg2;
- (bool)accessCodeScanner:(CDPUIInheritanceAccessCodeScannerView *)arg1 didScanCode:(NSString *)arg2;

@end
