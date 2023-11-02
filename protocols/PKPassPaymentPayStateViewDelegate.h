
@protocol PKPassPaymentPayStateViewDelegate <NSObject>

@optional

- (void)payStateView:(PKPassPaymentPayStateView *)arg1 revealingCheckmark:(bool)arg2;
- (void)payStateViewDidUpdateLayout:(PKPassPaymentPayStateView *)arg1;

@end
