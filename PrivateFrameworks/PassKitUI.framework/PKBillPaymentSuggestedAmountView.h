
@interface PKBillPaymentSuggestedAmountView : UIView {
    CABackdropLayer * _background;
    PKBillPaymentSuggestedAmount * _suggestedAmount;
}

@property (nonatomic, readonly) PKBillPaymentSuggestedAmount *suggestedAmount;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithSuggestedAmount:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)suggestedAmount;

@end
