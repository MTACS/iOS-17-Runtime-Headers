
@protocol PKBillPaymentRingViewDelegate <NSObject>

@required

- (void)billPaymentRingView:(PKBillPaymentRingView *)arg1 selectedSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2 selectedSuggestedAmountIsTarget:(bool)arg3 userInitiatedChange:(bool)arg4;

@optional

- (void)billPaymentRingView:(PKBillPaymentRingView *)arg1 amountChanged:(NSDecimalNumber *)arg2;

@end
