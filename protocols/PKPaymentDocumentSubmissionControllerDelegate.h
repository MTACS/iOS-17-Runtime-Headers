
@protocol PKPaymentDocumentSubmissionControllerDelegate <NSObject>

@required

- (void)captureController:(PKPaymentDocumentSubmissionController *)arg1 didChangeStateTo:(long long)arg2;
- (void)captureController:(PKPaymentDocumentSubmissionController *)arg1 showLoading:(bool)arg2;

@end
