
@protocol PKPaymentMethodSelectionViewControllerDelegate <NSObject>

@required

- (void)paymentMethodSelectionViewController:(PKPaymentMethodSelectionViewController *)arg1 didSelectPaymentMethod:(PKPaymentPass *)arg2;
- (void)paymentMethodSelectionViewController:(PKPaymentMethodSelectionViewController *)arg1 didToggleUseAppleCashBalance:(bool)arg2;

@end
