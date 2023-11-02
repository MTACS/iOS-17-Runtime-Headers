
@protocol PKBillPaymentRingViewDataSource <NSObject>

@required

- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 bottomCurvedTextForSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 interestTextForAmount:(NSDecimalNumber *)arg2;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 topCurvedTextForSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2;
- (NSString *)billPaymentRingViewZeroInterestText:(PKBillPaymentRingView *)arg1;
- (NSString *)disabledBottomCurvedTextForBillPaymentRingView:(PKBillPaymentRingView *)arg1;
- (NSString *)disabledTopCurvedTextForBillPaymentRingView:(PKBillPaymentRingView *)arg1;

@end
