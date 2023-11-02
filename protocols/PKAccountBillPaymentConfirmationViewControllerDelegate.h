
@protocol PKAccountBillPaymentConfirmationViewControllerDelegate

@required

- (NSDecimalNumber *)billPaymentConfirmationInterestForPaymentAmount:(NSDecimalNumber *)arg1;
- (NSString *)billPaymentConfirmationInterestStringForPaymentAmount:(NSDecimalNumber *)arg1;

@end
