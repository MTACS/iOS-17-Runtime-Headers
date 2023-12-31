
@protocol PKAccountBillPaymentAmountDescriptionViewDelegate <NSObject>

@required

- (void)billPaymentAmountDescriptionView:(PKAccountBillPaymentAmountDescriptionView *)arg1 hasChangedAmount:(NSDecimalNumber *)arg2 isValidAmount:(bool)arg3;
- (void)billPaymentAmountDescriptionViewHasTappedLearnMore:(PKAccountBillPaymentAmountDescriptionView *)arg1;

@end
